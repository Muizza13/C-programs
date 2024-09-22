// Program to swap 2 numbers without a third container.
#include <stdio.h>
#include <math.h>
int main(void) {
  float a, b;
  printf("Enter the two numbers to be swapped \n");
  scanf("%f%f", &a, &b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("Numbers after swapping are %f and %f", a,b);
  return 0;
}