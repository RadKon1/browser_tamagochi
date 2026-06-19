cmake_minimum_required(VERSION 3.25)
project(Cpp26Project CXX)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS False)

add_executable(main main.cpp)