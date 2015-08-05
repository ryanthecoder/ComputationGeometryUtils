cmake_minimum_required(VERSION 3.0.2)

project(CompGeomUtils CXX)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} '-fpermissive')
set(sources 
    src/point.cpp)

set(headers
    inc/point.hpp)

set(HEADER_INSTALL_DIR "/usr/include/CompGeomUtils")

install(FILES
    ${headers}
    DESTINATION
    ${HEADER_INSTALL_DIR})


add_library(compgeomutils ${sources} ${headers})

target_include_directories(
    compgeomutils
    PUBLIC
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/inc>
    $<INSTALL_INTERFACE:${HEADER_INSTALL_DIR}>)
enable_testing()
add_subdirectory(test)
