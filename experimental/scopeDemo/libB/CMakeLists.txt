cmake_minimum_required(VERSION 3.30)

project(libB)

add_library(libB STATIC libB.cpp)

target_include_directories(libB INTERFACE .) # Try PUBLIC for testing target properties.

# target_link_libraries(libB PRIVATE libA) # PUBLIC: Works PRIVATE: best choice
# target_link_libraries(libB PUBLIC libA) # Usecase-1
target_link_libraries(libB PRIVATE libA) # Usecase-2 ## Try PUBLIC for testing target properties.

# target_link_directories(libB PRIVATE .) # This is for testing target properties