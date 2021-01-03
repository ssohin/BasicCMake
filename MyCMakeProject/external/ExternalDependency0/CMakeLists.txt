cmake_minimum_required(VERSION 3.0.0)

project(ExternalDependency0)

set(LIBRARY_NAME
    ExternalDependency0
)
set(LIBRARY_HEADERS_DIR
    include/${LIBRARY_NAME}
)
set(LIBRARY_HEADERS
    ${LIBRARY_HEADERS_DIR}/ExternalDependency0.h
)
set(LIBRARY_SOURCE_DIR
    src
)
set(LIBRARY_SOURCE
)

add_library(${LIBRARY_NAME} INTERFACE)

target_include_directories(${LIBRARY_NAME} INTERFACE include)
