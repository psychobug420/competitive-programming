option(ENABLE_TEST_RUNNER "Enable test runner mode" OFF)

if(ENABLE_TEST_RUNNER)
    message(STATUS "Test runner mode enabled")
    add_compile_definitions(COMPETITIVE_DEBUG)
endif()

function(auto_register_executables_with_tests)
    set(options)
    set(oneValueArgs STANDARD)
    set(multiValueArgs)
    cmake_parse_arguments(AUTO "" "STANDARD" "" ${ARGN})

    if(NOT CMAKE_CXX_STANDARD)
        if(AUTO_STANDARD)
            set(CMAKE_CXX_STANDARD ${AUTO_STANDARD})
        else()
            set(CMAKE_CXX_STANDARD 23)
        endif()
    endif()
    set(CMAKE_CXX_STANDARD_REQUIRED ON)

    file(GLOB SOURCE_FILES "*.cpp")

    foreach(source_file ${SOURCE_FILES})
        get_filename_component(filename ${source_file} NAME_WE)
        add_executable(${PROJECT_NAME}_${filename} ${source_file})
        
        if(ENABLE_TEST_RUNNER)
            target_compile_definitions(${PROJECT_NAME}_${filename} PRIVATE 
                TEST_DATA_PATH="${CMAKE_CURRENT_SOURCE_DIR}/test_data"
                PROBLEM_NAME="${filename}"
                COMPETITIVE_DEBUG
            )
        endif()
        
        target_include_directories(${PROJECT_NAME}_${filename} PRIVATE 
            "${CMAKE_SOURCE_DIR}/utils"
        )
    endforeach()

    if(SOURCE_FILES)
        message(STATUS "Registered executables for ${PROJECT_NAME} (C++${CMAKE_CXX_STANDARD}): ${SOURCE_FILES}")
    endif()
endfunction()