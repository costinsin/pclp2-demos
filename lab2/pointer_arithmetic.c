#include <stdio.h>

int main() {
  int *p = (int *)0x2;

  printf("%p\n", p + 1);
}