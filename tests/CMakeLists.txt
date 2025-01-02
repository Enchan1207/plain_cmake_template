cmake_minimum_required(VERSION 3.21)

# Install GoogleTest
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)

set(test_name "plain_cmake_test")
add_executable(${test_name})
target_sources(${test_name} PRIVATE
    test_factorial.cpp
)
target_link_libraries(${test_name} PRIVATE
    GTest::gtest_main
    plain_cmake_library
)
target_include_directories(${test_name}
    PRIVATE
    ${PROJECT_SOURCE_DIR}/include
    ${GTEST_INCLUDE_DIRS}
)

# Discover and execute test
gtest_discover_tests(${test_name})
