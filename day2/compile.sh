#!/bin/bash

FILENAME=$1

if [ -f ./FILE ]; then
    rm ./FILE
fi

FILE=${FILENAME::-4}

OUTPUT="$(g++ -std=c++0x ${FILENAME} -o ${FILE})"

./${FILE}
