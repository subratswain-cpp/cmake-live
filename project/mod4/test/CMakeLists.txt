cmake_minimum_required(VERSION 3.30)

project(testInterfaceLib)

add_executable(testInterfaceLib main.cpp)
target_link_libraries(testInterfaceLib PRIVATE myHeaderOnlyLib)
