unifdef -DFOO=1 -DFOOB=42 -UBAR -M~ if1.c ifmissing.c if2.c
e=$?
diff -u if1.c~ if1.c | sed '/^[+-]\{3\} /s/	.*//'
mv if1.c~ if1.c
if [ -f if2.c~ ]
then
	echo test failure: did not expect if2.c to be processed! 1>&2
	mv if2.c~ if2.c
else
	echo test success: if2.c was not processed 1>&2
fi
exit $e
