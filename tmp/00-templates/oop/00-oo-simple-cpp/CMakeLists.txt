# set minimum cmake version
cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(evo-demo)               # Название проекта
set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type is Debug" FORCE)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

# Установка переменной со списком исходников
set(SOURCE_FILES
    # headers
    rectangle.h
    triangle.h
    figure.h
    container.h

    #sources
    main.cpp
    rectangle-in.cpp
    rectangle-out.cpp
    triangle-in.cpp
    triangle-out.cpp
    figure-in.cpp
    #figure-out.cpp
    container-constr.cpp
    container-in.cpp
    container-out.cpp
)

add_executable(evo-demo ${SOURCE_FILES})

