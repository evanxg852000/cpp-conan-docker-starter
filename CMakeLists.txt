cmake_minimum_required(VERSION 3.8)
project(CPP_PROJECT)

include(./macros.cmake)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

set(BUILD_FOLDER build)
set(VENDOR_DIR ${PROJECT_SOURCE_DIR}/vendor)
set(SOURCE_DIR ${PROJECT_SOURCE_DIR}/src)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory(src)
add_subdirectory(test)

#enable_testing()

#include_directories(include)
#include_directories(${SOURCE_DIR})
#add_executable(app main.cc)
#target_link_libraries(app ${CONAN_LIBS})