cmake_minimum_required(VERSION 3.0)
project(c__)

set(CMAKE_CXX_STANDARD 14)

add_executable(cmake-build-debug  string/Kmp.cpp List/linkList.cpp List/List.cpp)

add_executable(Kmp string/Kmp.cpp)