#!/bin/sh
#
# Copyright 2004-2008 Bob Proulx <bob@proulx.com>
# Copyright 2009 Tony Finch <dot@dotat.at>
# You may freely use, modify and/or distribute this file.
#
# $dotat: unifdef/runtests.sh,v 1.6 2009/11/27 13:08:58 fanf2 Exp $

: ${srcdir:=.}
: ${unifdef:=../unifdef}

uc() {
  echo "$*" | tr a-z A-Z
}

for c in *.c
do
  ok=true
  t=${c%.c}

  if [ -f ${t}.args ]
  then command="$unifdef $(cat ${t}.args) ${srcdir}/${t}.c"
  else command="$unifdef -DFOO=1 -DFOOB=42 -UBAR ${srcdir}/${t}.c"
  fi

  ${command} >${t}.out 2>${t}.err
  echo $? >${t}.rc

  for file in out err rc
  do
    exp=exp${file}
    expfile=${srcdir}/${c}.${exp}
    if [ ! -f ${expfile} ]
    then
      echo FAILED: $(uc ${exp}): ${command}
      echo Test Framework Error: Missing ${expfile} 1>&2
      ok=false
    elif ! cmp -s ${t}.${file} ${expfile}
    then
      echo FAILED: $(uc ${file}): ${command}
      diff -u ${t}.${file} ${expfile}
      ok=false
    fi
  done

  if ${ok}
  then rm -f ${t}.out ${t}.err ${t}.rc
  else rc=1
  fi
done
exit ${rc}
