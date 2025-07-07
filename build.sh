#!/usr/bin/env sh
set -e

if [ -e "build" ]
then
	rm -rf build
fi

cd src
mkdir -p output

seal .

mv output ../build
