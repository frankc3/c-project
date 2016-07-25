#!/bin/bash
#
set -e #exit on error
#set -x #print each cmd line

SRC="src/binGap.c src/main.c"
OUTPUT_DIR="bin"
OUTPUT="$OUTPUT_DIR/bin_gap"

#-------------------------------------
#          Make dir
#-------------------------------------

if [ ! -d $OUTPUT_DIR ];then
	echo "mkdir $OUTPUT_DIR"
	mkdir $OUTPUT_DIR
fi


if [ -f $OUTPUT ];then
	echo "remove $OUTPUT"
	rm $OUTPUT
fi

#-------------------------------------
#          Compile
#-------------------------------------

echo "running  $OUTPUT"

gcc $SRC -o $OUTPUT
if [ $? -ne "0" ];then
	echo "compiltion  error code:#?"
else
	echo "compilation done"
fi
#-------------------------------------
#           Run
#-------------------------------------
ret=`./$OUTPUT`  #ret contains the print statements of the program
if [ $? -ne "0" ];then
	echo "program returns an error code:#?"
else
	echo "Program has run succesfull"
fi
echo -e "\nprogram output:\n$ret"
exit 0

