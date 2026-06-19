cmake_minimum_required(VERSION 3.25)
project(Cpp23Project CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS False)

add_executable(main
    main.cpp
    include/player.h
    include/bubble.h
    src/bubble.cpp
    src/player.cpp
    include/constants.h
    include/timer.h
    src/timer.cpp
)

target_include_directories(main PRIVATE headers)