@echo off
echo Building DeskMetrics C library for Microsoft Windows
cd os
gcc -c -g windows.c
cd ..
gcc -c -g experiment.c
gcc -o experiment.exe experiment.o os\windows.o

echo Cleaning directory
cd os 
rm *.o
cd ..
rm *.o

