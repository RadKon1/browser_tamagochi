cmake_minimum_required(VERSION 3.10.0)
project(team_project_with_sofuszka VERSION 0.1.0 LANGUAGES C CXX)

add_executable(team_project_with_sofuszka main.cpp)


  if (CMAKE_CXX_COMPILER_VERSION VERSION_GREATER_EQUAL 19.12.25835)
    set(CMAKE_CXX20_STANDARD_COMPILE_OPTION "-std:c++latest")
    set(CMAKE_CXX20_EXTENSION_COMPILE_OPTION "-std:c++latest")
  endif()
