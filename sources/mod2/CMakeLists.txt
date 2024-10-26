cmake_minimum_required(VERSION 3.30)
project(genStaticLib)

add_library(myStaticLib src/mod2.cpp)

add_executable(testlibrary test/testMod2.cpp)

# Link the library(myStaticLib) with testlibrary executable
target_link_libraries(testlibrary myStaticLib) # Scope is optional. What is default scope?(TODO: explain!)

target_include_directories(testlibrary PUBLIC .) # Mandetory SCOPE
