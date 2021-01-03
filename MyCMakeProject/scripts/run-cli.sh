#!/bin/bash
set -e

run_cli() {
    rm -rf build/Release
    mkdir -p build/Release
    cd build/Release
    cmake ../../
    make -j4
    ./cli/MyCMakeProject_cli 
}

run_cli
