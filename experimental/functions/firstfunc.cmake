# How To Test?
#[[
    1. Comment/Uncomment function calls one after another to understand how it is works.

    2. cmake -P firstfunc.cmake
#]]
function(firstfunc) # Zero Arg Function
    message(STATUS "First function called")
endfunction()

# firstfunc()

#[[
Normal: Build artifacts. Command: cmake -S . -B build
Script Mode: No build (-P). Script mode runs CMake code without entering the full project configuration phase — no toolchain, no targets, no cache, and no build system files are generated.
Ex: cmake -P firstfunc.cmake
#]]

function(getCMakeVersion)
    message(STATUS "CMake version: ${CMAKE_VERSION}")
endfunction()

# getCMakeVersion()

# One Arg Function Demo

function(myOneArgFunc arg1)
    message(STATUS "${arg1}")
endfunction()

# myOneArgFunc("How are you?") # Works!
# myOneArgFunc() # Won't work

# myOneArgFunc("How are you?" 10 20 30 40 50)

function(demoHiddenArgs)
# ARGC ARGV ARGN 
    message(STATUS "Number of arguments: ${ARGC}")
    message(STATUS "[ARGV]: All arguments: ${ARGV}")
    foreach(elemet IN LISTS ARGV)
        message(STATUS "Element: ${elemet}")
    endforeach()
    message(STATUS "[ARGN]: Hidden arguments: ${ARGN}")
endfunction()

# demoHiddenArgs("How are you?" 10 20 30 40 50)

# Demo the difference between ARGV and ARGN
function(demoHiddenArgsV1 arg)
# ARGC ARGV ARGN 
    message(STATUS "Number of arguments: ${ARGC}")
    message(STATUS "[ARGV]: All arguments: ${ARGV}")
    foreach(elemet IN LISTS ARGV)
        message(STATUS "Element: ${elemet}")
    endforeach()
    message(STATUS "[ARGN]: Uncaptured arguments: ${ARGN}")

    # Use ARGV to print all the elements.
    message(STATUS "First argument: ${ARGV0}")
    message(STATUS "Second argument: ${ARGV1}")
    message(STATUS "Third argument: ${ARGV2}")
    message(STATUS "Fourth argument: ${ARGV3}")
    message(STATUS "Fifth argument: ${ARGV4}")
    message(STATUS "Sixth argument: ${ARGV5}")
    message(STATUS "Invalid argument: ${ARGV6}") # Will be empty

    # x = 20;
    set(MYVAR 7)
    message(STATUS "MYVAR = ${MYVAR}") # Will be empty

endfunction()
demoHiddenArgsV1("How are you?" 10 20 30 40 50)
