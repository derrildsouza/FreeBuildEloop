cmake_minimum_required(VERSION 3.10)
project(sample_eloop_build)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(dependency/hostapd_eloop)
add_subdirectory(src/main_app)
