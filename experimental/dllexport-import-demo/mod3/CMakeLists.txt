cmake_minimum_required(VERSION 3.30)
project(genDynamicLib)

if(WIN32)
    message(STATUS "Configuring for Windows")
    # set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON) # dllexport used in code. So it is not required.
else()
    message(STATUS "Configuring for Unix-like OS")
endif()

add_library(myDynamicLib SHARED src/mod3.cpp)
target_include_directories(myDynamicLib PUBLIC include .) # Mandetory SCOPE

# return()

# Testing the Library
add_executable(testDynamiclib test/testMod3.cpp)

# Link the library(myStaticLib) with testDynamiclib executable
target_link_libraries(testDynamiclib myDynamicLib) # Scope is optional. What is default scope?(TODO: explain!)

target_include_directories(testDynamiclib PUBLIC .) # Mandetory SCOPE
