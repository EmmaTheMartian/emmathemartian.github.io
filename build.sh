#!/usr/bin/env sh
set -e

if [ -e "output" ]
then
	rm -rf output
fi

if [ -e "tmp" ]
then
	rm -rf tmp
fi

mkdir -p output
mkdir -p tmp

mkdir -p tmp/include
python3 src/static/others/gen_readme.py > tmp/include/button_credits.inl

cc src/main.c -Isrc/include/ -Itmp/include
./a.out

cp -r src/static/ output/
