cmake_minimum_required(VERSION 3.10)

project(Contest)

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

SUBDIRLIST(CODEFORCES_SUBDIRS ${CMAKE_CURRENT_SOURCE_DIR}/codeforces)

foreach(subdir ${CODEFORCES_SUBDIRS})
    add_subdirectory(${subdir})
endforeach()