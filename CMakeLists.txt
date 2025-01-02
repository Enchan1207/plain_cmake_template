cmake_minimum_required(VERSION 3.21)

project(plain_cmake_template
    VERSION 0.1.0
    DESCRIPTION "Plain CMake template"
    LANGUAGES C CXX
)
enable_language(CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(src)

# Unit testing
option(plain_cmake_template_BUILD_TESTS "Enable testing of plain_cmake_template" OFF)
if(plain_cmake_template_BUILD_TESTS)
    set(INSTALL_GTEST OFF)
    enable_testing()
    message(NOTICE "plain_cmake_template: unit testing enabled")
    add_subdirectory(tests)
endif()

# cli application
option(plain_cmake_template_BUILD_CLI "Enable build cli application of plain_cmake_template" OFF)
if(plain_cmake_template_BUILD_CLI)
    add_subdirectory(cli)
endif()
