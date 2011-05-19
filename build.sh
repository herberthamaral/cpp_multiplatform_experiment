#!/bin/sh

set -e

version=`uname`

mac_compile(){
	cd os
	gcc -c -g macosx.c
	cd ..
	gcc -c -g experiment.c
	gcc -o experiment experiment.o os/macosx.o
}

case $version in 
	Darwin)
		mac_compile;
esac
