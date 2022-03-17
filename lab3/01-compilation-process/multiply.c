#include "multiply.h"

int multiply(int a, int b) {
    int result = 0;

    while (b) {
        result = add(result, a);
        b--;
    }

    return result;
}