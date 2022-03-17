#include "divide.h"
#include "multiply.h"

#define MULTIPLY_STRING "Multiplication of %d and %d is %d\n"
#define DIVIDE_STRING "Division of %d and %d is %d\n"

int main(void) {
    printf(MULTIPLY_STRING, 5, 6, multiply(5, 6));
    printf(DIVIDE_STRING, 24, 3, divide(24, 3));

    return 0;
}