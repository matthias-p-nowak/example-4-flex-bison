#
# this setup works with the following call for the integration into eclipse
# cmake -Bbuild -H. -GNinja .
#

cmake_minimum_required(VERSION 3.9)

project(Testing VERSION 0.1)
message(STATUS "--- root ---")

set(CMAKE_CXX_STANDARD 11)
# add_compile_definitions(WIN32)

find_package(BISON)
find_package(FLEX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/libs)

add_subdirectory(src)
