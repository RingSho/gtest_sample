cmake_minimum_required(VERSION 3.5.1)
enable_language(CXX)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(CalcTest)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR})

set(test_list
  calculateTest.cpp
)

set(src_list
  ../src/calculate/calculate.cpp
)

set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_FLAGS "-std=c++11 -O2 -mtune=native -march=native -mfpmath=both -no-pie")  # C11 でコンパイルする

add_executable(CalcTest ${test_list} ${src_list})

# Google Testライブラリを探索
find_package(GTest REQUIRED)
target_link_libraries(CalcTest ${GTEST_BOTH_LIBRARIES} pthread)
target_include_directories(CalcTest PUBLIC ${GTEST_INCLUDE_DIRS})