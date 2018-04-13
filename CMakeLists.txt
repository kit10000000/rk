cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 11)

project(demo)



add_executable(demo ${CMAKE_CURRENT_SOURCE_DIR}/sources/demo.cpp)


install(TARGETS demo RUNTIME DESTINATION bin)

enable_testing()
file(GLOB ${PROJECT_NAME}_TEST_SOURCES tests/*.cpp)
message(STATUS "PROJECT_NAME: [${PROJECT_NAME}]")
add_executable(check ${${PROJECT_NAME}_TEST_SOURCES})
message(STATUS "PROJECT_NAME_TEST_SOURCES: [${${PROJECT_NAME}_TEST_SOURCES}]")
message(STATUS "DEPENDS LIBS: [${DEPENDS_LIBRARIES}]")
add_test(NAME check COMMAND check "-s" "-r" "compact" "--use-colour" "yes") 

