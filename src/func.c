#include "plain_cmake_library/plain_cmake_library.h"

unsigned int factorial(unsigned int n) {
    unsigned int result = 1;
    while (n) {
        result *= n--;
    }
    return result;
}
