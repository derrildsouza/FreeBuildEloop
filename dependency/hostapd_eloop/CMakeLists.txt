cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files for the eloop library
set(ELOOP_SOURCES
    common.c
    eloop.c
    os_unix.c
    trace.c
    wpabuf.c
    wpa_debug.c
)

# Create eloop library
add_library(eloop STATIC ${ELOOP_SOURCES})

#include directories for the eloop library
target_include_directories(eloop PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/common
    ${CMAKE_CURRENT_SOURCE_DIR}/utils
)

message(STATUS "Compiled eloop sources: ${ELOOP_SOURCES}")
