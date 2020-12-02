cp if1.c overunchanged.c
ls -i overunchanged.c >overunchanged-before
unifdef -z1 -DWEASEL=1 -ooverunchanged.c overunchanged.c
e=$?
ls -i overunchanged.c >overunchanged-after
diff overunchanged-before overunchanged-after
rm -f overunchanged-before overunchanged-after overunchanged.c
exit $e
