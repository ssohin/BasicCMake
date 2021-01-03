# Basic CMake Project

## File Stucture
This repository contains a CMake Project template and this README file. 

CMake Project Template with generic filenames
```
| ========================================================
| MyCMakeProject
| ========================================================
|   | CMakeLists.txt
|   | README.md
|   | astyle
|   |   | astyle-options.txt
|   | cli
|   |   | CMakeLists.txt
|   |   | main.cpp
|   | external
|   |   | ExternalDependency0
|   |   |   | CMakeLists.txt
|   |   |   | include
|   |   |   |   | ExternalProject0
|   |   |   |   |   | projectheader.h
|   | include
|   |   | MyCMakeProject
|   |   |   | libraryheader0.h
|   |   |   | libraryheader1.h
|   | scripts
|   |   | run-tests.sh
|   | src
|   |   | CMakeLists.txt
|   |   | librarymodule0.cpp
|   |   | librarymodule1.cpp
|   | tests
|   |   | CMakeLists.txt.in
|   |   | CMakeLists.txt
|   |   | main.cpp
|   |   | test_case0.cpp
|   |   | test_case1.cpp
|   |   | example_io
|   |   |   | example_input
|   |   |   | example_output
| ========================================================
```

# Scripts

Two scripts are provided for development convenience

To run the program:
```
cd MyCmakeProject && ./scripts/run-cli.sh 
```
To run the tests:
```
cd MyCmakeProject && ./scripts/run-tests.sh 
```
