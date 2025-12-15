cmake_minimum_required(VERSION 3.30)

project(myHeaderOnlyLib)

add_library(myHeaderOnlyLib INTERFACE)

target_include_directories(myHeaderOnlyLib INTERFACE include)
