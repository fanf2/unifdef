#!/bin/sh -ex
#
# $dotat: unifdef/release.sh,v 1.5 2009/11/24 12:14:37 fanf2 Exp $

DISTFILES="
	Changelog
	Makefile
	README
	release.sh
	unifdef.c
	unifdef.1
	unifdef.txt
	unifdefall.sh
"

VERSION=$(awk '/dotat:/ { print $3 }' unifdef.c)

UNIFDEF=unifdef-$VERSION

rm -f unifdef-* unifdef-*.tar.gz
mkdir $UNIFDEF
cp $DISTFILES $UNIFDEF
tar cfz $UNIFDEF.tar.gz $UNIFDEF
rm -r $UNIFDEF

case $USER in
fanf|fanf2)
	scp -r $DISTFILES $UNIFDEF.tar.gz\
		fanf@chiark.greenend.org.uk:public-html/prog/unifdef
esac
