#include <stdio.h>
#include <stdlib.h>

void winner(int param) {
    printf("You have found a secret function\n");

    if (param == 0xdeadbeef)
        printf("Wow! You've done it!\n");
}

void read_input() {
    unsigned int age = 23;
    char name[10];

    printf("What's her name?\n");
    scanf("%s", name);

    printf("Her age is %u (0x%.8x)\n", age, age);

    if (age < 18) {
        printf("You're a pedophile!!!\n");
    }
}

int main(void) {
    read_input();

    return 0;
}