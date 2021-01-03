cmake_minimum_required (VERSION 3.6)
project(MyCMakeProject_cli)

find_package(Boost COMPONENTS program_options REQUIRED)

# Add main executable
add_executable(MyCMakeProject_cli
        main.cpp
        )

target_link_libraries ( MyCMakeProject_cli
        MyCMakeProject_lib
        ${Boost_LIBRARIES}
        )

