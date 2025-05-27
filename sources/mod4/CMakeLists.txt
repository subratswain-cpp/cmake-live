cmake_minimum_required(VERSION 3.30)

project(HeaderOnlyLib)

add_library(myHeaderOnlyLib INTERFACE)

target_include_directories(myHeaderOnlyLib INTERFACE headerOnlyLib/include)

# Test Interface Library
add_executable(testInterfaceLib test/main.cpp)
target_link_libraries(testInterfaceLib PRIVATE myHeaderOnlyLib)
