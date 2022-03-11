#include <stdio.h>

void increment(int *number) {
    (*number)++;
}

void decrement(int *number) {
    (*number)--;
}

void do_operation(int *number, void (*func) (int *)) {
    func(number);
}

int main() {
    int a = 5;

    printf("Initial value:   %d\n", a);


    do_operation(&a, increment);
    printf("After increment: %d\n", a);

    do_operation(&a, increment);
    printf("After increment: %d\n", a);


    do_operation(&a, decrement);
    printf("After decrement: %d\n", a);

    do_operation(&a, decrement);
    printf("After decrement: %d\n", a);
}