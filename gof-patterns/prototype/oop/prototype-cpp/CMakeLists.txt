# set minimum cmake version
cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(evo-demo)               # Название проекта
set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type is Debug" FORCE)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

# Установка переменной со списком исходников
set(SOURCE_FILES
    # headers
    simple-rectangle.h
    simple-triangle.h
    simple-figure.h
    simple-container.h

    #sources
    main.cpp
    simple-rectangle.cpp
    simple-triangle.cpp
    simple-figure-in.cpp
    simple-container.cpp
)

add_executable(prototype ${SOURCE_FILES})

