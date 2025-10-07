cmake_minimum_required(VERSION 4.0)
project(simulador_cache)

set(CMAKE_CXX_STANDARD 20)

add_executable(simulador_cache main.cpp
        Memory.cpp
        Linha.h
        Cache.cpp)
