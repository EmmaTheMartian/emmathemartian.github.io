#!/usr/bin/env sh
set -e

if [ -e "output" ]
then
	rm -rf output
	mkdir -p output
fi

cc src/main.c -Isrc/include/
./a.out

cp -r src/static/ output/
