cmake_minimum_required(VERSION 3.20.0)
project(draw_QImage_in_thread VERSION 0.1.0)

add_executable(draw_QImage_in_thread WIN32
  "${CMAKE_CURRENT_SOURCE_DIR}/widget.h"
  "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
  "${CMAKE_SOURCE_DIR}/res/res.qrc"
  )

target_link_libraries(draw_QImage_in_thread PRIVATE 
  Qt5::Widgets
  )