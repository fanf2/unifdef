#!/bin/sh

: ${srcdir:=.}
: ${unifdef:=../unifdef}
errors=0

uc() {
  echo "$*" | tr a-z A-Z
}

for t in empty none \
         small1 small2 \
         spaces1 spaces2 spaces3 spaces4 \
         if1 if2 if3 if4 if5
do
  ok=true

  command="$unifdef -DFOO=1 -DFOOB=42 -UBAR ${srcdir}/${t}.c"

  ${command} >${t}.out 2>${t}.err
  echo $? >${t}.rc

  for file in out err rc
  do
    exp=exp${file}
    expfile=${srcdir}/${t}.c.${exp}
    if [ ! -f ${extfile} ]
    then
      echo FAILED: $(uc ${exp}): ${command}
      echo Test Framework Error: Missing ${expfile} 1>&2
      rm -f ${t}.out ${t}.err ${t}.rc
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
