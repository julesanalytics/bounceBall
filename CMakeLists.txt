cmake_minimum_required(VERSION 3.27)
project(bounceBall)

set(CMAKE_CXX_STANDARD 14)

include_directories(algo)
include_directories(reader)

add_executable(bounceBall
        ball.cpp
        ball.h
        driver.cpp
        lifetime.cpp
        lifetime.h)
