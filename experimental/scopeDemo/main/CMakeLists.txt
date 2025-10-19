cmake_minimum_required(VERSION 3.30)
project(DemoTargetScopes)

add_executable(main main.cpp)

# target_link_libraries(main PUBLIC libA) # Should use PRIVATE as main is an executable.
# target_link_libraries(main PUBLIC libB) # Should use PRIVATE as main is an executable.
target_link_libraries(main PRIVATE libC)
