cmake_minimum_required(VERSION 3.21)
project(mokoko C)

set(CMAKE_C_STANDARD 23)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(mokoko main.c mokokolinalg.c mokokolinalg.h)
