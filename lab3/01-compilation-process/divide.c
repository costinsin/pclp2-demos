#include "divide.h"

int divide(int dividend, int divisor) {
    int result = 0;

    while (dividend > 0) {
        dividend = add(dividend, -divisor);
        result++;
    }

    return result;
}