#include <stdio.h>

int main(void) {
  int x = 5;
  float pi = 3.14;
  int *ptr_x;
  ptr_x = &x;
  int *ptr_pi;
  printf("&x: %p, x: %d\n", &x, x);
  printf("&ptr_x: %p, ptr_x: %p, *ptr_x %d\n", &ptr_x, ptr_x, *ptr_x);

  //Como alterar o valor de x para 7 utilizando ptr_x?
  *ptr_x = 7;
  printf("&x: %p, x: %d\n", &x, x);
  printf("&ptr_x: %p, ptr_x: %p, *ptr_x %d\n", &ptr_x, ptr_x, *ptr_x);

  return 0;
}

