cmake_minimum_required(VERSION 3.30)

project(DemoLibA)

add_library(libA STATIC libA.cpp) # By deafult STATIC

target_include_directories(libA PUBLIC include) # INTERFACE PRIVATE

# PUBLIC: Visible to Target itself + Consumer
# INTERFACE: Not for the target but the consumer needs.
# PRIVATE: Only for the target. Consumer can't use it.

#[[
PLAN:
A B C.

libB to use libA.
2. Avoid direct use of libA in main
3. main to use libA through libB
4. Now libB to use PRIVATE to link with libA(Build will fail)
5. Fix error in next lecture.
#]]

