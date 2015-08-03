add_definitions (-DBOOST_TEST_DYN_LINK)
include_directories("${PROJECT_SOURCE_DIR}/inc")
find_package(Boost REQUIRED 
    COMPONENTS 
        system
        filesystem
        unit_test_framework)
include_directories(${Boost_INCLUDE_DIRS})

add_executable(pointtest point_test.cpp)

target_link_libraries(pointtest
    ${Boost_LIBRARIES}
    compgeomutils)
    
add_test(NAME point_test 
   WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
   COMMAND pointtest)
