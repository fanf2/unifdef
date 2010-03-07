../unifdef -DFOO=1 -DFOOB=42 -UBAR -ooutfile.c if1.c
cat outfile.c
rm outfile.c
