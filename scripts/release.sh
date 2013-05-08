#!/bin/sh

. ./version.sh

for f in $@ $(git ls-files | egrep -v '^web/|^[.]git$')
do
	mkdir -p web/$V/$(dirname $f)
	cp $f web/$V/$f
done

cd web
zip -qr $V.zip $V
tar cf $V.tar $V
gzip -k9 $V.tar
xz -k9 $V.tar
rm -R $V $V.tar
