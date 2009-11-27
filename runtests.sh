#!/bin/sh
#
# This was written by Tony Finch <dot@dotat.at>
# You may do anything with it, at your own risk.
# http://creativecommons.org/publicdomain/zero/1.0/
#
# $dotat: unifdef/runtests.sh,v 1.11 2009/11/27 14:35:51 fanf2 Exp $

${1:+cd} ${1:-:}
for cmd in *.sh
do
	t=${cmd%.sh}

	. ${cmd} >${t}.out 2>${t}.err
	echo $? >${t}.rc

	ok=true
	for e in out err rc
	do
		exp=${t}.exp${e}
		got=${t}.${e}
		if ! cmp -s ${exp} ${got}
		then
			echo FAILED: ${got}: $(cat ${cmd})
			diff -u ${exp} ${got}
			ok=false
		fi
	done

	if ${ok}
	then rm -f ${t}.out ${t}.err ${t}.rc
	else rc=1
	fi
done
exit ${rc}
