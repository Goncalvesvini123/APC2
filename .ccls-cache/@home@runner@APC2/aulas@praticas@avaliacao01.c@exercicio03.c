#include <stdio.h> 

int main(void) { 
  int n1 = 3, n2 = 5;
  int *p1, *p2; 
  int temp;
  
  p1 = &n1;
  p2 = &n2;

  // troque os valores usando uma variavel temporária
  temp = *p1;
  *p1 = *p2 
  *p2 = temp;
  
  printf("n1: %d, n2; %d\n", n1, n2);
  
  return 0;
}