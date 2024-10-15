cmake_minimum_required(VERSION 3.10.2)
project(timeutils)

set(CMAKE_CXX_STANDARD 17)
add_library(${PROJECT_NAME} STATIC src/TimeUtils.cpp include/${PROJECT_NAME}/TimeUtils.hpp)

target_include_directories(${PROJECT_NAME}
        PUBLIC include
        PRIVATE include/${PROJECT_NAME})