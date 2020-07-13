cmake_minimum_required(VERSION 3.14)
project(dynamic_programming)

set(CMAKE_CXX_STANDARD 14)

add_executable(lcs LCS/main.cpp LCS/LCS.cpp)

add_executable(lcs_ctn LCS_CTN/main.cpp LCS_CTN/LCS_CTN.cpp)

add_executable(lps LPS/main.cpp LPS/LPS.cpp)