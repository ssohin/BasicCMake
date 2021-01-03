cmake_minimum_required (VERSION 3.6)
project(MyCMakeProject_lib)

#set(CMAKE_BUILD_TYPE Release)
set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Boost COMPONENTS thread system REQUIRED)

set(PROJECT_SOURCE_DIR ./)
set(PROJECT_INCLUDE_DIR ../include)

set(
        PROJECT_SOURCE
        ${PROJECT_SOURCE_DIR}/librarymodule0.cpp
        ${PROJECT_SOURCE_DIR}/librarymodule1.cpp
   )

# Add include directories
include_directories (${PROJECT_INCLUDE_DIR})
include_directories (${Boost_INCLUDE_DIR})

# Add source to this project's library
add_library (MyCMakeProject_lib
        ${PROJECT_SOURCE}
        )

target_include_directories(MyCMakeProject_lib INTERFACE
        ${PROJECT_INCLUDE_DIR}
        )
target_link_libraries(MyCMakeProject_lib PUBLIC
        ${Boost_LIBRARIES}
        )