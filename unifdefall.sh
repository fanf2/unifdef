#!/bin/sh
#
# remove all the #if's from a source file
#
# $dotat: unifdef/unifdefall.sh,v 1.1 2002/04/28 23:42:36 fanf Exp $

set -e

basename=`basename $0`
tmp=`mktemp -d -t $basename` || exit 2

# controlling symbols
unifdef -s "$@" | sort | uniq > $tmp/ctrl

# defined symbols and their values
cpp -dM "$@" | sort | uniq |
	sed -Ee 's/^#define[ 	]+//;s/[ 	]*$//' > $tmp/hashdefs

# defined symbols without their values
sed -Ee 's/^([A-Za-z0-9_]+).*$/\1/' $tmp/hashdefs > $tmp/alldef

# all the -Ufoo arguments
comm -23 $tmp/ctrl $tmp/alldef > $tmp/undef
sed -Ee 's/^(.*)$/-U\1 \\/' $tmp/undef > $tmp/args.u

# all the -Dfoo=bar arguments
comm -12 $tmp/ctrl $tmp/alldef > $tmp/def
while read sym
do	sed -Ee '/^('"$sym"')([(][^)]*[)])?[ 	]+(.*)$/!d;s//-D\1=\3/' $tmp/hashdefs
done < $tmp/def |
	sed -Ee 's/\\/\\\\/g;s/"/\\"/g;s/^/"/;s/$/" \\/' > $tmp/args.d

# create the command line
echo unifdef \\ > $tmp/cmd
cat $tmp/args.d $tmp/args.u >> $tmp/cmd
echo '"$@"' >> $tmp/cmd

# do it all
sh $tmp/cmd "$@"

# clean up
rm -r $tmp
