#!/bin/sh

. ./version.sh

for f in $@ $(git ls-files | egrep -v '^web/|^[.]git$')
do
	mkdir -p web/$V/$(dirname $f)
	cp $f web/$V/$f
done

cd web
zip -qr $V.zip $V
tar cfz $V.tar.gz $V
rm -R $V
