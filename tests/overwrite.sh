cp if1.c overwrite.c
../unifdef -DFOO=1 -DFOOB=42 -UBAR -ooverwrite.c overwrite.c
cat overwrite.c
rm overwrite.c
