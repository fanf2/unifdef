#!/bin/sh -ex
#
# $dotat: unifdef/release.sh,v 1.13 2010/01/19 13:37:00 fanf2 Exp $

DISTFILES="
	Changelog
	INSTALL
	Makefile
	README
	release.sh
	runtests.sh
	tests
	unifdef.c
	unifdef.1
	unifdef.txt
	unifdefall.sh
"

VERSION=$(perl -ne '$sum += $_ if s/.*\$(dotat): \S+ 1[.](\d+) .*/$2/; END { print "$sum\n" }' $DISTFILES)

UNIFDEF=unifdef-1.$VERSION

sed "s/unifdef-NNN/$UNIFDEF/g" <index.html.in >index.html

rm -rf unifdef-* unifdef-*.tar.gz
mkdir $UNIFDEF
cp -R $DISTFILES $UNIFDEF
rm -rf $UNIFDEF/tests/CVS
tar cfz $UNIFDEF.tar.gz $UNIFDEF

case $USER in
fanf|fanf2)
	rsync -r $DISTFILES $UNIFDEF.tar.gz index.html \
		fanf@chiark.greenend.org.uk:public-html/prog/unifdef
esac
