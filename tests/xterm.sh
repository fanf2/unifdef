unifdef -s xterm-292-main.c | sed 's/^/#undef /' >xterm-undefs.h
echo $? 1>&2
unifdef -f xterm-undefs.h -f xterm-defs.h xterm-292-main.c >xterm-main.c
echo $? 1>&2
cat xterm-main.c
grep '#if' xterm-main.c
echo $? 1>&2
rm -f xterm-undefs.h xterm-main.c
