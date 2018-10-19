file(GLOB_RECURSE HEADER_FILES "./*.hpp")
file(GLOB_RECURSE SOURCE_FILES "./*.cpp")

include_directories(${VENDOR_DIR})
include_directories(${SOURCE_DIR})

add_library(core SHARED STATIC ${SOURCE_FILES})

target_link_libraries(core ${CONAN_LIBS})
target_compile_options(core PRIVATE -fvisibility=hidden)

install(TARGETS core DESTINATION ${BUILD_FOLDER})
install(FILES ${HEADER_FILES} DESTINATION include/core)