#include <stdio.h>

int main() {
    int number = 0xDEADBEEF;

    printf("First byte:  %X\n", *((unsigned char *) &number));
    printf("Second byte: %X\n", *((unsigned char *) &number + 1));
    printf("Third byte:  %X\n", *((unsigned char *) &number + 2));
    printf("Forth byte:  %X\n", *((unsigned char *) &number + 3));
}