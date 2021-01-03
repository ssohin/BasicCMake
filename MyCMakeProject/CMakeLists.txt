cmake_minimum_required (VERSION 3.6)
project(MyCMakeProject)

set(CMAKE_CXX_STANDARD 14)

#set(CMAKE_BUILD_TYPE Release)
set(CMAKE_BUILD_TYPE Debug)

# Find installed dependencies
find_package(Boost COMPONENTS thread system REQUIRED)

# Add library
add_subdirectory(src)

# External Projects:
set(EXTERNAL_LIBRARIES_DIR external)
set(EXTERNAL_LIBRARIES
        ExternalDependency0
        )
foreach(LIBRARY ${EXTERNAL_LIBRARIES})
    add_subdirectory("${EXTERNAL_LIBRARIES_DIR}/${LIBRARY}")
endforeach(LIBRARY)

add_subdirectory(cli)

## Tests
enable_testing()
add_subdirectory(tests)

