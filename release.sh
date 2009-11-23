#!/bin/sh -e

DISTFILES="
	Makefile
	unifdef.c
	unifdef.1
	unifdef.man
	unifdef.log
	unifdefall.sh
"

VERSION=$(awk '/dotat:/ { print $3 }' unifdef.c)

UNIFDEF=unifdef-$VERSION

rm -f unifdef-* unifdef-*.tar.gz
mkdir $UNIFDEF
cp $DISTFILES $UNIFDEF
tar cfz $UNIFDEF.tar.gz $UNIFDEF
rm -r $UNIFDEF
scp -r $DISTFILES $UNIFDEF.tar.gz\
	fanf@chiark.greenend.org.uk:public-html/prog/unifdef
