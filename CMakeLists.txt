cmake_minimum_required(VERSION 3.27)
project(bounceBall)

set(CMAKE_CXX_STANDARD 14)

include_directories(util)
include_directories(reader)

add_executable(bounceBall
        model/ball.cpp
        model/ball.h
        driver.cpp
        model/Speed.cpp
        model/Speed.h
        display/SimpleDisplayer.cpp
        display/SimpleDisplayer.h)
