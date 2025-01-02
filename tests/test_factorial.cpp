#include <gtest/gtest.h>

extern "C" {
#include "plain_cmake_library/plain_cmake_library.h"
}

TEST(PlainCMakeLibraryTest, testFactorial) {
    const unsigned int n = 10;
    const unsigned int result = factorial(n);

    EXPECT_EQ(result, 3628800);
}
