cmake_minimum_required(VERSION 3.22)
project(gtkdemo_window)

find_package(PkgConfig REQUIRED)
pkg_check_modules (GTK3 REQUIRED gtk+-3.0)

include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} GTKDEMO_WINDOW_SOURCE)

link_libraries(${GTK3_LIBRARIES})
add_executable(${PROJECT_NAME} ${GTKDEMO_WINDOW_SOURCE})
# target_link_libraries(${PROJECT_NAME} ${GTK3_LIBRARIES})