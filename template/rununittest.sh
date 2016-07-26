#!/bin/bash
#
#set -e #exit on error
#set -x #print each cmd line


SRC="myunittest.cpp"
SRC_DIR="unittest" 
OUTPUT_DIR="bin"
PROGRAM="ut_myApp"
OUTPUT="$OUTPUT_DIR/$PROGRAM" 

if [ ! -d $OUTPUT_DIR ];then
	echo "mkdir $OUTPUT_DIR"
	mkdir $OUTPUT_DIR
fi


if [ -f $OUTPUT ];then
	echo "remove $OUTPUT"
	rm $OUTPUT
fi


echo "running  $OUTPUT"
export GTEST_HOME=~/usr/gtest
#export LD_LIBRARY_PATH=$GTEST_HOME/lib:$LD_LIBRARY_PATH
#g++ -I $GTEST_HOME/include -L $GTEST_HOME/lib -lgtest -lgtest_main -lpthread 
g++ -g -Wall $SRC_DIR'/'$SRC  src/myApp.c -D UNIT_TEST  -I /usr/include/gtest/ -L /usr/lib/ -lgtest -lgtest_main -lpthread  -o $OUTPUT
#g++ $SRC_DIR'/'$SRC  -lcppunit -o $OUTPUT
if [ $? -ne "0" ];then
	echo "compiltion  error code:#?"
else
	echo "compilation done"
fi
ret=`./$OUTPUT`  #ret contains the print statements of the program
if [ $? -ne "0" ];then
	echo "program returns an error code:#?"
else
	echo "Program has run succesfull"
fi
echo -e "\nprogram output:\n$ret"
exit 0

