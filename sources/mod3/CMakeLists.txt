cmake_minimum_required(VERSION 3.30)
project(genStaticLib)

add_library(myDynamicLib SHARED src/mod3.cpp) # By default static. To create dynamic library, we need `shared`

add_executable(testlibrary-dynamic test/testMod3.cpp)

# Link the library(myDynamicLib) with testlibrary-dynamic executable
target_link_libraries(testlibrary-dynamic myDynamicLib) # Scope is optional. What is default scope?(TODO: explain!)

target_include_directories(testlibrary-dynamic PUBLIC .) # Mandetory SCOPE
