#!/usr/bin/env sh
set -e

cd src
mkdir -p output

seal .

if [ -e "../build" ]
then
	rm -rf ../build
fi

mv output ../build
