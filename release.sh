#!/bin/sh -ex
#
# $dotat: unifdef/release.sh,v 1.7 2009/11/26 13:52:09 fanf2 Exp $

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

VERSION=$(perl -ne '$sum += $_ if s/.*\$dotat: unifdef/release.sh,v 1.7 2009/11/26 13:52:09 fanf2 Exp $sum\n" }' $DISTFILES)

UNIFDEF=unifdef-1.$VERSION

sed -i~ "s/unifdef-NNN/$UNIFDEF/g" index.html

rm -rf unifdef-* unifdef-*.tar.gz
mkdir $UNIFDEF
cp $DISTFILES $UNIFDEF
tar cfz $UNIFDEF.tar.gz $UNIFDEF
rm -r $UNIFDEF

case $USER in
fanf|fanf2)
	scp $DISTFILES $UNIFDEF.tar.gz index.html \
		fanf@chiark.greenend.org.uk:public-html/prog/unifdef
esac
