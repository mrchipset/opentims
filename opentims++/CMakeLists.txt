aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/sqlite _SQLITE_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/zstd _ZSTD_SRC)
set(_OPENTIMS_SRC
    ${CMAKE_CURRENT_SOURCE_DIR}/converters.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/opentims.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/scan2inv_ion_mobility_converter.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tof2mz_converter.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/thread_mgr.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/so_manager.cpp
    )

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/sqlite)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/zstd)
# list(APPEND _OPENTIMS_SOURCES  ${OPENTIMS_SRC})
# list(APPEND _OPENTIMS_SOURCES  ${ZSTD_SRC})
# list(APPEND _OPENTIMS_SOURCES  ${SQLITE_SRC})

set(OPENTIMS_SRC ${_OPENTIMS_SRC} PARENT_SCOPE)
set(SQLITE_SRC ${_SQLITE_SRC} PARENT_SCOPE)
set(ZSTD_SRC ${_ZSTD_SRC} PARENT_SCOPE)
