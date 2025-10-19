cmake_minimum_required(VERSION 3.30)

project(DemoTargetScopes)

add_subdirectory(libA)

add_subdirectory(libB)
add_subdirectory(libC)

add_subdirectory(main)

# Property of targets(Include directories and Interface include directories)
get_target_property(var libA INCLUDE_DIRECTORIES)
message(STATUS "Target A, Include include directory : " ${var})

get_target_property(var libA INTERFACE_INCLUDE_DIRECTORIES)
message(STATUS "Target A, Interface include directory : " ${var})

get_target_property(var libB INCLUDE_DIRECTORIES)
message(STATUS "Target B, Include include directory : " ${var})

get_target_property(var libB INTERFACE_INCLUDE_DIRECTORIES)
message(STATUS "Target B, Interface include directory : " ${var})

# Link libraries & Interface Link Libraries
get_target_property(var libB LINK_LIBRARIES)
message(STATUS "Target B, Link Libraries : " ${var})

get_target_property(var libB INTERFACE_LINK_LIBRARIES)
message(STATUS "Target B, Interface Link Libraries : " ${var})

get_target_property(var libB LINK_DIRECTORIES)
message(STATUS "Target B, LINK_DIRECTORIES : " ${var})

get_target_property(var libB INTERFACE_LINK_DIRECTORIES)
message(STATUS "Target B, Interface LINK_DIRECTORIES : " ${var})
