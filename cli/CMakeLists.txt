cmake_minimum_required(VERSION 3.21)

set(cli_name "plain_cmake_cli")
add_executable(${cli_name})
target_sources(${cli_name} PRIVATE
    main.c
)
target_include_directories(${cli_name} PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)
target_compile_options(${cli_name} PRIVATE
    -Wall
)
target_link_libraries(${cli_name} PRIVATE
    plain_cmake_library
)
