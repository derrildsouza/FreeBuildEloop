cmake_minimum_required(VERSION 3.10)
project(EloopTestApp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")

#Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -o2")

include_directories(${CMAKE_SOURCE_DIR}/dependency/hoostapd_eloop)

file(GLOB APP_SOURCES "*.cpp")

add_executable(sample_eloop_bin ${APP_SOURCES})

target_link_libraries(sample_eloop_bin PRIVATE eloop)
