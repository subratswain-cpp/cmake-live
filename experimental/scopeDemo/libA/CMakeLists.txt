cmake_minimum_required(VERSION 3.30)

project(DemoLibA)

add_library(libA STATIC libA.cpp) # By deafult STATIC

target_include_directories(libA INTERFACE .)

# PUBLIC: Visible to Target itself + Consumer
# INTERFACE: Not for the target but the consumer needs.
# PRIVATE: Only for the target. Consumer can't use it.
