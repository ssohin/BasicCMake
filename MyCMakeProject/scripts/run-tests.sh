#!/bin/bash
set -e

run_cpp_tests() {
    rm -rf build/Release
    mkdir -p build/Release
    cd build/Release
    cmake ../../
    make -j4
    make run_unit_tests
    cd ../../
}

run_cpp_tests

