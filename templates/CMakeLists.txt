cmake_minimum_required(VERSION 3.10)

project(CodeforcesTemplates LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}_N_TEST_CASES_TEMPLATE n_test_cases_template.cpp)