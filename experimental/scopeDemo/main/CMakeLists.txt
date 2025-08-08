cmake_minimum_required(VERSION 3.30)
project(DemoTargetScopes)

add_executable(main main.cpp)

target_link_libraries(main PUBLIC libA)
