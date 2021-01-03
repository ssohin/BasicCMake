cmake_minimum_required(VERSION 3.6)
project(unit_tests)

# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
  message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
  message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
        ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
        EXCLUDE_FROM_ALL)

# The gtest/gtest_main targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
  include_directories("${gtest_SOURCE_DIR}/include"
          "${gmock_SOURCE_DIR}/include")
endif()

# Add test cpp file
add_executable(unit_tests
        main.cpp
        test_case0.cpp
        test_case1.cpp
        )

# Link test executable against gtest & gtest_main
target_link_libraries ( unit_tests
        MyCMakeProject_lib
        gmock
        gtest
        gtest_main
        ${Boost_LIBRARIES}
        )

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/example_io/example_input
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/example_io/example_output
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

# Add target to run unit tests
add_custom_target(run_unit_tests
        COMMAND unit_tests
        )

