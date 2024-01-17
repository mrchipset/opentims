cmake_minimum_required(VERSION 3.4.0)
project(optims++)

set(CXX_STANDARD_REQUIRED 17)
add_definitions(-D_AMD64_)

add_subdirectory(opentims++)
add_subdirectory(examples)

include_directories(opentims++)

add_library(zstd ${SQLITE_SRC})
add_library(sqlite ${ZSTD_SRC})

add_library(libopentims ${OPENTIMS_SRC})
target_link_libraries(libopentims zstd)
target_link_libraries(libopentims sqlite)


add_executable(get_data examples/get_data.cpp)
target_link_libraries(get_data libopentims)