# set minimum cmake version
cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
SET(CMAKE_C_COMPILER ppclang)
set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type is Debug" FORCE)


#set(BUILD_DIR "${CMAKE_BINARY_DIR}")
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

add_executable(test-stat-lib main.c)

# Линковка программы с библиотекой figure
target_link_libraries(test-stat-lib figure)
