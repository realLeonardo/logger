cmake_minimum_required(VERSION 3.17)
project(logger)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_HEADERS
        src/logger.h
        src/logger_base.h
        src/logger_file.h
        src/color.h)

set(PROJECT_SOURCES
        )

set(PROJECT_TESTCASES
        test/logger_base_test.h
        main.cpp
        )

add_executable(logger_test ${PROJECT_HEADERS} ${PROJECT_SOURCES} ${PROJECT_TESTCASES})