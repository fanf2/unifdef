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

project('unifdef', 'c',
        version: '2.12',
        license: 'BSD-2-Clause',
        meson_version: '>=0.47.0',
        default_options: ['warning_level=3'])

srcs = [
    'unifdef.c',
    custom_target('version.h',
                  build_by_default: true,
                  build_always_stale: true,
                  output: ['version.h'],
                  command: [find_program('./scripts/reversion.py'), '@SOURCE_ROOT@', '@BUILD_ROOT@']),
]
incdirs = []
if host_machine.system() == 'windows'
srcs += [
    'win32/unifdef.h',
    'win32/win32.c',
    'FreeBSD/getopt.c',
    'FreeBSD/err.c'
]
incdirs += ['win32']
else
srcs += ['unix/unifdef.h']
incdirs += ['unix']
endif
incdirs += ['.']

executable('unifdef',
           srcs,
           include_directories: incdirs,
           implicit_include_directories: false,
           install: true)
install_data('unifdefall.sh',
             rename: 'unifdefall',
             install_mode: 'rwxr-xr-x')
install_man('unifdef.1', configure_file(input: 'unifdef.1',
                                        output: 'unifdefall.1',
                                        copy: true))
