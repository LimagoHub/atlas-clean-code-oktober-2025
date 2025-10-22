cmake_minimum_required(VERSION 3.31)
project(VectorFillerUebung)

set(CMAKE_CXX_STANDARD 17)

add_executable(VectorFillerUebung main.cpp
        atlas/client/Client.h
        atlas/container/VectorFactory.h
        atlas/generator/Generator.h
        atlas/time/Stopwatch.h
        atlas/bootstrap/Bootstrap.h)
