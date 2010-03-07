mkdir -p overdir
cp if1.c overdir/overwrite.c
../unifdef -DFOO=1 -DFOOB=42 -UBAR -ooverdir/overwrite.c overdir/overwrite.c
cat overdir/overwrite.c
rm -r overdir
