cmake_minimum_required(VERSION 3.22)
project(GTKDEMO)

function (add_subdirectory_if_exist arg)
    message(STATUS "add_subdirectory_if_exist: ${CMAKE_CURRENT_SOURCE_DIR}/${ARGV0}/CMakeLists.txt")
    if (EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${ARGV0}/CMakeLists.txt)
        add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/${ARGV0})
    endif()
endfunction ()

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/products/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/products/lib)

add_subdirectory_if_exist(gtkdemo_window)
add_subdirectory_if_exist(gtkmm_window)