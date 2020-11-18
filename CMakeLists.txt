cmake_minimum_required(VERSION 3.17)
project(logger)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_HEADERS
        src/logger.h)

set(PROJECT_SOURCES
        src/logger.cpp)

set(PROJECT_TESTCASES
        test/main.cpp
        )

# add_library(logger SHARED ${PROJECT_HEADERS} ${PROJECT_SOURCES})
add_executable(logger_test ${PROJECT_HEADERS} ${PROJECT_SOURCES} ${PROJECT_TESTCASES})