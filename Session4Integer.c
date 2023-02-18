#include <stdio.h>
int main() {

  unsigned char a = 60, b = 13;

  printf("a = %d, b = %d\n", a, b);
  printf("Binary A = 00111100\n");
  printf("Binary B = 00001101\n");
  printf("a & b  = %d\n", a & b);
  printf("~a = %d\n", a = ~a);
  printf("~b = %d\n", a = ~b);
  printf("a | b = %d\n", a | b);
  printf("a ^ b =  %d\n", a ^ b);
  printf("b << 1 = %d\n", b << 1);
  printf("b >> 1 = %d\n", b >> 1);


  return 0;
