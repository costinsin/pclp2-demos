#include <stdio.h>

typedef struct padding {
    char a; // 1 byte
    int b; // 4 bytes
    short c; // 2 bytes
} padding;


typedef struct __attribute__((__packed__)) no_padding {
    char a; // 1 byte
    int b; // 4 bytes
    short c; // 2 bytes
} no_padding;

int main() {
    printf("Size of padding struct: %d\n", sizeof(padding));
    printf("Size of no_padding struct: %d\n", sizeof(no_padding));

    int a = 4;
    char b = 5;
    int c = 6;

    printf("Address of a: %p\n", &a);
    printf("Address of b: %p\n", &b);
    printf("Address of c: %p\n", &c);

    printf("Distance between c and a on the stack: %d\n", (char*) &c - (char *) &a);
    printf("Distance between c and b on the stack: %d\n", (char*) &c - (char *) &b);
}