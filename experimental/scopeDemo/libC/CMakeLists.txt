cmake_minimum_required(VERSION 3.30)

project(libC)

add_library(libC INTERFACE)

# Usecase-1
# target_link_libraries(libC INTERFACE libB) # PUBLIC, PRIVATE: Not Ok.

# usecase-2
# target_link_libraries(libC INTERFACE libB) # PUBLIC, PRIVATE: Not Ok.
# target_link_libraries(libC INTERFACE libA) # PUBLIC, PRIVATE: Not Ok.

# Single instruction - works!
target_link_libraries(libC INTERFACE libA libB)
