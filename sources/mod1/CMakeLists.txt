cmake_minimum_required(VERSION 3.30)
project(ExecutableGeneration)

add_executable(mod1 src/mod1.cpp)

# 1. configure| => cmake -S . -B [build directory]
# 2. Generation.=|====> cmake ===> GENERATOR
# 3. Build.===> cmake --build [build directory]