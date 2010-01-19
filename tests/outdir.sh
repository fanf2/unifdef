mkdir -p outdir
../unifdef -DFOO=1 -DFOOB=42 -UBAR -ooutdir/outfile.c if1.c
diff if1.c outdir/outfile.c
rm -r outdir
