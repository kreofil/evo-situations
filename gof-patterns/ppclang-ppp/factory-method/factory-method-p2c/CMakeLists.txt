# set minimum cmake version
cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(factory-method)               # Название проекта
SET(CMAKE_C_COMPILER ppclang)
set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type is Debug" FORCE)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

# Установка переменной со списком исходников
set(SOURCE_FILES
    # headers
    rectangle.h
    triangle.h
    figure.h
    figure-container.h

    creator.h

    #sources
    main.c

    rectangle.c
    triangle.c
    figure.c
    figure-container.c
    input-figures.c

    creator.c

)

add_executable(factory-method ${SOURCE_FILES})

