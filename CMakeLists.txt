cmake_minimum_required(VERSION 3.16)
project(aclyx LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB SOURCES src/*.cpp)

add_executable(aclyx ${SOURCES})
