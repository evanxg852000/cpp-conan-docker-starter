cmake_minimum_required(VERSION 3.8)

add_subdirectory(core)
add_subdirectory(main)

include_directories(${VENDOR_DIR})
include_directories(${SOURCE_DIR})