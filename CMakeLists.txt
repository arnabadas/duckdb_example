cmake_minimum_required(VERSION 3.21)
project(duckdb_example)

set(CMAKE_CXX_STANDARD 20)

include_directories(D:/dev/cpp/libduckdb-windows-amd64)
link_directories(D:/dev/cpp/libduckdb-windows-amd64)
add_executable(example main.cpp)
target_link_libraries(example duckdb_static)