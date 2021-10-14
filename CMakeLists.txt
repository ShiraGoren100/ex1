cmake_minimum_required(VERSION 3.15)
project(ex1)

set(CMAKE_CXX_STANDARD 11)

add_executable(ex1 tests.cpp anomaly_detection_util.cpp anomaly_detection_util.h)