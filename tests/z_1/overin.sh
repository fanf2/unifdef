cp if1.c overin.c
unifdef -z1 -DFOO=1 -DFOOB=42 -UBAR -ooverin.c <overin.c
e=$?
cat overin.c
rm overin.c
exit $e
