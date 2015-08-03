cmake_minimum_required(VERSION 3.2)

project(CompGeomUtils CXX)

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