#!/bin/sh

line="---------------------------------------------------"

git log --no-merges --stat --pretty=format:"$line%n%ai %an <%ae>%n%n%s%n%n%b" |
uniq
echo
echo $line
