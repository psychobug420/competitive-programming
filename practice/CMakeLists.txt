cmake_minimum_required(VERSION 3.10)

project(CodeforcesPractice LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}_2180_C 2180_c.cpp)

add_subdirectory(timus)