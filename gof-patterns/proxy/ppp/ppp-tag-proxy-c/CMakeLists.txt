# set minimum cmake version
cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(proxy)               # Название проекта
SET(CMAKE_C_COMPILER ppclang)
set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type is Debug" FORCE)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

# Установка переменной со списком исходников
set(SOURCE_FILES
    # headers
    figure.h
    rectangle.h
    figure-rectangle.h
    triangle.h
    figure-triangle.h
    figure-proxy.h
    container.h

    #sources
    figure-in.c
    figures-input.c
    figure-out.c
    figure-rectangle-in.c
    figure-rectangle-out.c
    figure-triangle-in.c
    figure-triangle-out.c
    rectangle-in.c
    rectangle-out.c
    triangle-in.c
    triangle-out.c
    figure-proxy-in.c
    figure-proxy-out.c
    container-constr.c
    container-in.c
    container-out.c
    main.c
)

add_executable(proxy ${SOURCE_FILES})
