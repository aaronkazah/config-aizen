cmake_minimum_required(VERSION 3.13)
project(config_aizen)

set(CMAKE_CXX_STANDARD 14)

configure_file(test.ini ${CMAKE_CURRENT_BINARY_DIR}/test.ini COPYONLY)
add_executable(${PROJECT_NAME} main.cpp source/config-aizen.cpp source/config-aizen.hpp)
