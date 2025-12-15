cmake_minimum_required(VERSION 3.30)

project(Mod5)

add_executable(mod5 test/main.cpp src/code1.cpp src/code2.cpp)

target_link_libraries(mod5 PRIVATE myDynamicLib myStaticLib myHeaderOnlyLib)

target_include_directories(mod5 PRIVATE include)


#[[
Project-2 PLAN
create_executable(
    NAME myuExe
    SOURCES test/main.cpp src/code1.cpp src/code2.cpp
    LINK_LIBS myDynamicLib myStaticLib myHeaderOnlyLib
    INCLUDE_DIR include
)

Ex:
create_executable(
    NAME mod5
    SOURCES test/main.cpp src/code1.cpp src/code2.cpp
    LINK_LIBS myDynamicLib myStaticLib myHeaderOnlyLib
    INCLUDE_DIRS include
)
]]#

# Next: How to write functions in CMake.

