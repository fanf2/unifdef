unifdef -DFOO -DF1 -M~ crlf.c if1.c
e=$?
diff -u crlf.c~ crlf.c | sed '/^[+-]\{3\} /s/	.*//'
diff -u if1.c~  if1.c  | sed '/^[+-]\{3\} /s/	.*//'
mv crlf.c~ crlf.c
mv if1.c~  if1.c
exit $e
