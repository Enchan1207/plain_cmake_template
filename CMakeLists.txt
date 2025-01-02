cmake_minimum_required(VERSION 3.21)

project(plain_cmake_template
    VERSION 0.1.0
    DESCRIPTION "Plain CMake template"
    LANGUAGES C CXX
)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(src)

# Unit testing
option(${CMAKE_PROJECT_NAME}_BUILD_TESTS "Enable testing of ${CMAKE_PROJECT_NAME}" OFF)
if(${CMAKE_PROJECT_NAME}_BUILD_TESTS)
    set(INSTALL_GTEST OFF)
    enable_testing()
    message(NOTICE "${CMAKE_PROJECT_NAME}: unit testing enabled")
    add_subdirectory(tests)
endif()

# cli application
option(${CMAKE_PROJECT_NAME}_BUILD_CLI "Enable build cli application of ${CMAKE_PROJECT_NAME}" OFF)
if(${CMAKE_PROJECT_NAME}_BUILD_CLI)
    add_subdirectory(cli)
endif()
