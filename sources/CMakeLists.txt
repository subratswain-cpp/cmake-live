cmake_minimum_required(VERSION 3.30)

project(Project-1)

add_subdirectory(mod2)
add_subdirectory(mod3)
add_subdirectory(mod4)
add_subdirectory(mod5)

if(WIN32)
    set_target_properties(
        mod5 myDynamicLib testDynamiclib
        PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"

    )
endif()

# message("Build dir : ${CMAKE_BINARY_DIR}")