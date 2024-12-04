cmake_minimum_required(VERSION 3.0) # Проверка версии CMake.
                                    # Если версия установленой программы
                                    # старее указаной, произойдёт аварийный выход.

project(two_dispatch LANGUAGES CXX) # Название проекта

set(BINARY_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BINARY_DIR}/bin")

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Список исходных файлов
set(SOURCE_FILES
    # Headers
    NumberClass.h
    IntClass.h
    DoubleClass.h
    
    # Sources
    IntClass.cpp
    DoubleClass.cpp
    minus.cpp
    main.cpp
)

add_executable(two_dispatch ${SOURCE_FILES})  # Создает исполняемый файл с именем two_dispatch
