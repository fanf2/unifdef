#!/bin/sh

: ${srcdir:=.}
: ${unifdef:=../unifdef}
errors=0

uc() {
  echo "$*" | tr a-z A-Z
}

for c in *.c
do
  ok=true

  t=${c%.c}

  if [ -f ${t}.args ]
  then
    command="$unifdef $(cat ${t}.args) ${srcdir}/${t}.c"
  else
    command="$unifdef -DFOO=1 -DFOOB=42 -UBAR ${srcdir}/${t}.c"
  fi

  ${command} >${t}.out 2>${t}.err
  echo $? >${t}.rc

  for file in out err rc
  do
    exp=exp${file}
    expfile=${srcdir}/${t}.c.${exp}
    if [ ! -f ${expfile} ]
    then
      echo FAILED: $(uc ${exp}): ${command}
      echo Test Framework Error: Missing ${expfile} 1>&2
      exit 1
    fi
    if ! cmp -s ${t}.${file} ${expfile}
    then
      echo FAILED: $(uc ${file}): ${command}
      diff -u ${t}.${file} ${expfile}
      errors=1
      ok=false
    fi
  done

  ${ok} && rm -f ${t}.out ${t}.err ${t}.rc

done

exit ${errors}
