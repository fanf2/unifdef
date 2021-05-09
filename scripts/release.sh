#!/bin/sh

V=$(sed '/"@(#) \$Version: / s/"@(#) \$Version: //
/"@(#) \$Date: / s/"@(#) \$Date: //
/ \$\\n"/ s/ \$\\n"//' ./version.h | sed -n 1p)

for f in $@ $(git ls-files | egrep -v '^web/|^[.]git$')
do
	mkdir -p web/$V/$(dirname $f)
	cp $f web/$V/$f
done

cd web
zip -qr $V.zip $V
tar cf $V.tar $V
xz -k9 $V.tar
gzip -9 $V.tar
rm -R $V

ls -l $V.*
