#! /bin/bash

cmake -B build/ -DCMAKE_BUILD_TYPE=Release
make -C build/
build/CLM
