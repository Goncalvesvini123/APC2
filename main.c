#include <stdio.h>

int main() {
  short int numero = 0;
  printf("Tamanho em bytes de numero: %ld\n", sizeof(numero));
  printf("Tamanho em bytes de int: %ld\n", sizeof(int));
  printf("Tamanho em bytes de short: %ld\n", sizeof(short int));
  printf("Tamanho em bytes de long: %ld\n", sizeof(long int));
 return 0;
}