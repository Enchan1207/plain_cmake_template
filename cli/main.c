#include <stdio.h>
#include <stdlib.h>

#include "plain_cmake_library/plain_cmake_library.h"

int main(int argc, char const *argv[]) {
    if (argc < 2) {
        puts("Usage ./factorial [n]");
        return 1;
    }
    int n = atoi(argv[1]);
    if (n < 0) {
        puts("Error: n must be greater than 0");
        return 1;
    }

    unsigned int result = factorial(n);
    printf("factorial(%d) = %u\n", n, result);
    return 0;
}
