cmake_minimum_required(VERSION 3.22)
project(gtkmm_window)

find_package(PkgConfig REQUIRED)
pkg_check_modules (GTKMM REQUIRED gtkmm-3.0)

include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} GTKMM_WINDOW_SOURCE)

link_libraries(${GTKMM_LIBRARIES})
add_executable(${PROJECT_NAME} ${GTKMM_WINDOW_SOURCE})