# set minimum cmake version
cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(thread-string)               # Название проекта
SET(CMAKE_C_COMPILER ppclang)
set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type is Debug" FORCE)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

# Установка переменной со списком исходников
set(SOURCE_FILES
    # headers
    ppp-thread.h
    string-thread.h

    #sources
    ppp-thread.c
    string-thread.c

    main.c
)

add_executable(thread-string ${SOURCE_FILES})
