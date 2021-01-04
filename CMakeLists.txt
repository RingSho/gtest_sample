cmake_minimum_required(VERSION 3.5.1)
enable_language(CXX)

### Compiler Settings

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(Calc)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR})

set(src_list
  src/main.cpp
  src/calculate/calculate.cpp
)

add_subdirectory(../src)

set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_FLAGS "-std=c++11 -O2 -mtune=native -march=native -mfpmath=both -no-pie")  # C11 でコンパイルする

add_executable(Calc ${src_list})
