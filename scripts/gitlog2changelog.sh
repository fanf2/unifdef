#!/bin/sh

line="---------------------------------------------------"

git log --no-merges --decorate -M --stat --pretty=format:"$line%n%ai %an <%ae>%d%n%n%s%n%n%b" |
uniq
echo
echo $line
