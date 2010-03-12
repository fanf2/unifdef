#!/bin/sh

[ ! -f version.sh ] && [ ! -d .git ] && exit 1

[ -f version.sh ] && . version.sh

if [ -d .git ]
then
	GV=$(git describe --abbrev=4)
	git update-index -q --refresh
	if git diff-index --quiet HEAD
	then
		GD="$(git show --pretty=format:%ai --quiet HEAD)"
	else
		GD="$(date +'%Y-%m-%d %H:%M:%S %z')"
		GV=$GV-dirty
	fi
	if [ "$GV $GD" != "$V $D" ]
	then
		V="$GV"
		D="$GD"
		echo "V=\"$V\""  >version.sh
		echo "D=\"$D\"" >>version.sh
		cat version.sh
		rm -f version.h
	fi
fi

if [ ! -f version.h ]
then
	printf '"@(#) $Version: %s $\\n"\n' "$V" >version.h
	printf '"@(#) $Date: %s $\\n"\n'   "$D" >>version.h
	cat version.h
fi
