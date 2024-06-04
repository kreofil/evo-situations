# set minimum cmake version
cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(evo-demo)               # Название проекта
set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type is Debug" FORCE)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

# Установка переменной со списком исходников
set(SOURCE_FILES
    # headers
    shape_atd.h
    rectangle_atd.h
    triangle_atd.h
    container_atd.h

    #sources
    main.cpp

    rectangle_In.cpp
    container_Constr.cpp
    rectangle_Out.cpp
    triangle_In.cpp
    container_In.cpp
    triangle_Out.cpp
    container_Out.cpp
    shape_In.cpp
)

add_executable(evo-demo ${SOURCE_FILES})
