# set minimum cmake version
cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(evo-demo)               # Название проекта
set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type is Debug" FORCE)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

# Установка переменной со списком исходников
set(SOURCE_FILES
    # headers
    Rectangle.h
    Triangle.h
    Figure.h
    FigRectangle.h
    FigTriangle.h
    FigColorDecorator.h

    Container.h

    #sources
    Main.cpp

    Rectangle.cpp
    Triangle.cpp
    Figure.cpp
    FigRectangle.cpp
    FigTriangle.cpp
    FigColorDecorator.cpp

    Container.cpp
)

add_executable(evo-demo ${SOURCE_FILES})




