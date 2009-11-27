#!/bin/sh
#
# This was written by Tony Finch <dot@dotat.at>
# You may do anything with it, at your own risk.
# http://creativecommons.org/publicdomain/zero/1.0/
#
# $dotat: unifdef/runtests.sh,v 1.8 2009/11/27 14:08:08 fanf2 Exp $

for cmd in *.sh
do
	t=${cmd%.sh}

	. ${cmd} >${t}.out 2>${t}.err
	echo $? >${t}.rc

	for e in out err rc
	do
		got=${t}.${e}
		exp=${t}.exp${e}
		if ! cmp -s ${got} ${exp}
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
