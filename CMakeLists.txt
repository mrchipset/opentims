cmake_minimum_required(VERSION 3.4.0)
project(optims++)

set(CXX_STANDARD_REQUIRED 17)
add_definitions(-D_AMD64_)

add_subdirectory(opentims++)

include_directories(opentims++)

add_definitions(-DSQLITE_CORE)
add_definitions(-DSQLITE_ENABLE_COLUMN_METADATA)
add_definitions(-DSQLITE_ENABLE_RTREE)

add_library(sqlite ${SQLITE_SRC})
add_library(zstd ${ZSTD_SRC})

add_library(libopentims ${OPENTIMS_SRC})
target_link_libraries(libopentims zstd)
target_link_libraries(libopentims sqlite)


add_executable(get_data examples/get_data.cpp)
target_link_libraries(get_data libopentims)