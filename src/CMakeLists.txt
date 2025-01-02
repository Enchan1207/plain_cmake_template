cmake_minimum_required(VERSION 3.21)

set(library_name "plain_cmake_library")
add_library(${library_name})
target_sources(${library_name} PRIVATE
    func.c
)
target_include_directories(${library_name} PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)
target_compile_options(${library_name} PRIVATE
    -Wall
)
