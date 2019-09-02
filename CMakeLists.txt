cmake_minimum_required(VERSION 3.14)
project(Sort)

set(CMAKE_CXX_STANDARD 17)

add_executable(Sort header/selectionSort.h main/shellSort.cpp header/selectionSort.h header/insertionSort.h)