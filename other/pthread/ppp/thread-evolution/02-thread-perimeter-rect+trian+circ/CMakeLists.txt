# set minimum cmake version
cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(evo-demo)               # Название проекта
SET(CMAKE_C_COMPILER ppclang)
set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type is Debug" FORCE)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

# Установка переменной со списком исходников
set(SOURCE_FILES
    # headers
    figure.h
    circle.h
    figure-circle.h
    rectangle.h
    figure-rectangle.h
    triangle.h
    figure-triangle.h
    container.h
    ppp-thread.h

    #sources
    figure-in.c
    figures-input.c
    figure-out.c
    figure-perimeter.c
    figure-circle-in.c
    figure-circle-out.c
    figure-circle-perimeter.c
    figure-rectangle-in.c
    figure-rectangle-out.c
    figure-rectangle-perimeter.c
    figure-triangle-in.c
    figure-triangle-out.c
    figure-triangle-perimeter.c
    circle-in.c
    circle-out.c
    circle-perimeter.c
    rectangle-in.c
    rectangle-out.c
    rectangle-perimeter.c
    triangle-in.c
    triangle-out.c
    triangle-perimeter.c
    container-constr.c
    container-in.c
    container-out.c
    container-perimeter-out.c
    ppp-thread.c
    main.c
)

add_executable(evo-demo ${SOURCE_FILES})
