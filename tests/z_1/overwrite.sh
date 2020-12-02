cp if1.c overwrite.c
unifdef -z1 -DFOO=1 -DFOOB=42 -UBAR -ooverwrite.c overwrite.c
e=$?
cat overwrite.c
rm overwrite.c
exit $e
