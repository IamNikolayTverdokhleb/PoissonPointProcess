cmake_minimum_required(VERSION 3.14)
project(StochasticProcessesLib)

set(CMAKE_CXX_STANDARD 17)

add_executable(StochasticProcessesLib main.cpp probabilities.cpp probabilities.h Process.cpp Process.h)