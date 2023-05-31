cmake_minimum_required(VERSION 3.12)

project(editor)

include_directories(${CMAKE_CURRENT_LIST_DIR})

include(${CMAKE_CURRENT_LIST_DIR}/src/src.cmake)

add_executable(${PROJECT_NAME} main.cpp ${SRC})