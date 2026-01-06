cmake_minimum_required(VERSION 3.10)

project(GoodBye2025 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}_TASK_A task_a.cpp)

add_executable(${PROJECT_NAME}_TASK_B task_b.cpp)
