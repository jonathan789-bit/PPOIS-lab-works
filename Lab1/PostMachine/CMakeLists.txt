cmake_minimum_required(VERSION 3.10...3.31)
project(PostMachineProject)

add_library(
    PostMachineLibrary
    src/PostMachine.cpp
)

target_include_directories(
    PostMachineLibrary
    PUBLIC include
)

add_executable(
    PostMachineApp
    src/main.cpp
)

target_link_libraries(
    PostMachineApp
    PostMachineLibrary
)

# find_package(GTest REQUIRED)
# add_executable(
#     PostMachineTests
#     test/PostMachineTests.cpp
# )
# target_link_libraries(
#     PostMachineTests
#     PostMachineLibrary
#     GTest::gtest
#     GTest::gtest_main
# )
# include(GoogleTest)
# gtest_discover_tests(PostMachineTests)