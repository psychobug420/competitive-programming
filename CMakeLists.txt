cmake_minimum_required(VERSION 3.10)

project(CompetitiveProgramming)

# Add cmake modules directory to the search path
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

add_subdirectory(contests)
add_subdirectory(practice)
add_subdirectory(templates)
