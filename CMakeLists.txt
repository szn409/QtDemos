cmake_minimum_required(VERSION 3.20.0)
project(QtDemos VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Qt5 5.14.2 EXACT REQUIRED COMPONENTS Widgets)

# set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_subdirectory(draw_QImage_in_thread)