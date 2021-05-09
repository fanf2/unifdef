#!/usr/bin/env python
# Copyright (c) 2021 Tony Finch <dot@dotat.at>

# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#     notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#     notice, this list of conditions and the following disclaimer in the
#     documentation and/or other materials provided with the distribution.

# THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
# ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
# FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
# OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
# OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
# SUCH DAMAGE.

"""
mimics reversion.sh
    accepts a SOURCEDIR as argv[1], default is '.'
    accepts a OUTDIR as argv[2], default is '.'

    creates argv[2]/version.h with
```c
"@(#) $Version: unifdef.<tag>.<commits-since>.<commit>${modified:+.XX} $\n"
"@(#) $Date: <date either in '%Y-%m-%d %H:%M:%S %z' local time or date of last commit in UTC> $\n"
```
"""

import os
import subprocess
import re
import time
import sys
V = ''
D = ''

SOURCEDIR = '.'
OUTDIR = '.'

if len(sys.argv) == 3 and os.path.isdir(sys.argv[2]):
    OUTDIR = sys.argv[2]
if len(sys.argv) >= 2 and os.path.isdir(sys.argv[1]):
    SOURCEDIR = sys.argv[1]

versionh = os.path.join(OUTDIR, 'version.h')
sourceversionh = os.path.join(SOURCEDIR, 'version.h')
gitdir = os.path.join(SOURCEDIR, '.git')

if not os.path.isdir(gitdir) and not os.path.isfile(sourceversionh):
    sys.exit('Your copy of unifdef is incomplete!')

# Using simple logic to parse it, it could be made better using re
# since the pattern is already known
with open(versionh if os.path.isfile(versionh) else
          sourceversionh if os.path.isfile(sourceversionh) else
          os.devnull) as f:
    for line in f:
        arr = line.split(' ')
        if len(arr) == 4 and line.startswith('"@(#) $Version: '):
            V = arr[2]
        elif len(arr) == 6 and line.startswith('"@(#) $Date: '):
            D = ' '.join(arr[2:5])

if os.path.isdir(gitdir):
    GV = re.sub('-g*', '.',
                re.sub('[.]', '-',
                       subprocess.run(['git', 'describe'],
                                      check=False,
                                      cwd=SOURCEDIR,
                                      capture_output=True,
                                      text=True,
                                      universal_newlines=True).stdout)).rstrip()
    subprocess.run(['git', 'update-index', '-q', '--refresh'],
                   check=False,
                   cwd=SOURCEDIR)
    if not subprocess.run(['git', 'diff-index', '--quiet', 'HEAD'],
                          check=False,
                          cwd=SOURCEDIR).returncode:
        GD = subprocess.run(['git', 'show', '--pretty=format:%ai', '-s', 'HEAD'],
                            check=False,
                            cwd=SOURCEDIR,
                            capture_output=True,
                            text=True,
                            universal_newlines=True).stdout
    else:
        GD = time.strftime('%Y-%m-%d %H:%M:%S %z')
        GV += '.XX'
    unifdef = os.path.join(OUTDIR, 'unifdef')
    unifdefc = os.path.join(SOURCEDIR, 'unifdef.c')
    unifdefh = os.path.join(SOURCEDIR, 'win32/unifdef.h' if sys.platform == 'win32'
                            else 'unix/unifdef.h')
    if D != '' and os.path.exists(unifdef) and (
            os.path.getctime(unifdef) > os.path.getctime(unifdefc) and
            os.path.getctime(unifdef) > os.path.getctime(unifdefh)):
        GD = D
    if GV != V or GD != D:
        print('version {} {}'.format(V, D), file=sys.stderr)
        print('     -> {} {}'.format(GV, GD), file=sys.stderr)
        V = GV
        D = GD

with open(versionh, mode='w') as f:
    print('"@(#) $Version: {} $\\n"'.format(V), file=f)
    print('"@(#) $Date: {} $\\n"'.format(D), file=f)
