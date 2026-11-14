cmake_minimum_required(VERSION 3.10...3.31)
project(VectorProject)

add_library(
    VectorLibrary
    src/Vector.cpp
)

target_include_directories(
    VectorLibrary
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src
)

add_executable(
    VectorApp
    src/main.cpp
)

target_link_libraries(
    VectorApp
    VectorLibrary
)