cmake_minimum_required(VERSION 3.5)

project(SP4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(SP4 Main.cpp IntNode.cpp IntNode.h IntSet.cpp IntSet.h)
