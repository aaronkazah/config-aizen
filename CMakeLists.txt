cmake_minimum_required(VERSION 3.13)
project(config_aizen)

set(CMAKE_CXX_STANDARD 14)

add_executable(config_aizen main.cpp source/config-aizen.cpp source/config-aizen.hpp)