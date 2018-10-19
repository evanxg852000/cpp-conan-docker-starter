cmake_minimum_required(VERSION 3.8)
project(app)

file(GLOB MAIN_SOURCE_FILES "./*.cpp")

include_directories(${VENDOR_DIR})
include_directories(${SOURCE_DIR})

add_executable(app ${MAIN_SOURCE_FILES})
target_link_libraries(app core ${CONAN_LIBS})

install(TARGETS app DESTINATION ${BUILD_FOLDER})