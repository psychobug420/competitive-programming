cmake_minimum_required(VERSION 3.10)

project(Codeforces)

macro(SUBDIRLIST result curdir)
    file(GLOB children RELATIVE ${curdir} ${curdir}/*)
    set(dirlist "")
    foreach(child ${children})
        if(IS_DIRECTORY ${curdir}/${child})
            LIST(APPEND dirlist ${curdir}/${child})
        endif()
    endforeach()
    set(${result} ${dirlist})
endmacro()

SUBDIRLIST(SUBDIRS ${CMAKE_SOURCE_DIR}/contests)

foreach(subdir ${SUBDIRS})
    add_subdirectory(${subdir})
endforeach()

add_subdirectory(practice)

# This added here to remove error highlighting for templates
add_subdirectory(templates)
