#!/bin/bash

FILENAME=$1

if [ -f ./FILE ]; then
    rm ./FILE
fi

FILE=${FILENAME::-4}

#OUTPUT="$(g++ ${FILENAME} -o ${FILE} `pkg-config --libs --cflags gtkmm-3.0`)"
OUTPUT="$(g++ -std=c++0x ${FILENAME} -o ${FILE})"

./${FILE}
