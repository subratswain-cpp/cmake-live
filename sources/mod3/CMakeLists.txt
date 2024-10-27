cmake_minimum_required(VERSION 3.30)
project(genDynamicLib)

add_library(myDynamicLib SHARED src/mod3.cpp)

add_executable(testDynamiclib test/testMod3.cpp)

# Link the library(myStaticLib) with testDynamiclib executable
target_link_libraries(testDynamiclib myDynamicLib) # Scope is optional. What is default scope?(TODO: explain!)

target_include_directories(testDynamiclib PUBLIC .) # Mandetory SCOPE
target_include_directories(myDynamicLib PUBLIC .) # Mandetory SCOPE
