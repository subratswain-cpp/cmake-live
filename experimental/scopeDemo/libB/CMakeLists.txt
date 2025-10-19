cmake_minimum_required(VERSION 3.30)

project(libB)

add_library(libB STATIC libB.cpp)

target_include_directories(libB INTERFACE .)

# target_link_libraries(libB PRIVATE libA) # PUBLIC: Works PRIVATE: best choice
target_link_libraries(libB PUBLIC libA)
