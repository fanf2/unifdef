../unifdef -DFOO=1 -DFOOB=42 -UBAR -ooutfile.c if1.c
diff if1.c outfile.c
rm outfile.c
