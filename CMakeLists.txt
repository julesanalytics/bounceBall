cmake_minimum_required(VERSION 3.27)
project(bounceBall)

set(CMAKE_CXX_STANDARD 14)

include_directories(algo)
include_directories(reader)

add_executable(bounceBall
        algo/speedlnx.cpp
        algo/speedlnx.h
        reader/filereader.cpp
        ball.cpp
        driver.cpp
        ball.h)
