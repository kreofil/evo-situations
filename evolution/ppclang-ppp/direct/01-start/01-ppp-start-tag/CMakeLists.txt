# set minimum cmake version
cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(evo-demo)               # Название проекта
SET(CMAKE_C_COMPILER ppclang)
set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type is Debug" FORCE)
# Настройка флагов компиляции
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -xc")

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
    container-constr.c
    container-in.c
    container-out.c
    main.c
)

add_executable(evo-demo ${SOURCE_FILES})
