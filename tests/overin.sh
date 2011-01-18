cp if1.c overin.c
../unifdef -DFOO=1 -DFOOB=42 -UBAR -ooverin.c <overin.c
cat overin.c
rm overin.c
