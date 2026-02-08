# AutoRegisterExecutables.cmake
# Usage: auto_register_executables([STANDARD <version>])
# Priority: CMAKE_CXX_STANDARD > STANDARD param > default 23

macro(auto_register_executables)
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
    endforeach()

    if(SOURCE_FILES)
        message(STATUS "Registered executables for ${PROJECT_NAME} (C++${CMAKE_CXX_STANDARD}): ${SOURCE_FILES}")
    endif()
endmacro()
