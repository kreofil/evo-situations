# set minimum cmake version
cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(ppscl)               # project name
SET(CMAKE_C_COMPILER ppclang)
set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type is Debug" FORCE)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${BUILD_DIR}/../lib")

# Установка переменной со списком исходников
set(SOURCE_LIB
    # headers
    value/value.h
    array/array.h
    stack/stack.h
    vector/vector.h
    list/list.h
    hashset/hashset.h
    container/container.h

    #sources
    # test.c
    value/value.c
    array/array.c
    stack/stack.c
    vector/vector.c
    list/list.c
    hashset/hashset.c
    container/container.c
    array/array-container.c
    stack/stack-container.c
    vector/vector-container.c
    list/list-container.c
    hashset/hashset-container.c
)

add_library(containers STATIC ${SOURCE_LIB})   # Создание статической библиотеки
