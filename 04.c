// Program to swap two numbers.
#include <math.h>
#include <stdio.h>
int main() {
  float a, b, c;
  printf("Enter the two integers \n");
  scanf("%f%f", &a, &b);
  printf("Numbers before swapping %f and %f", a, b);
  c = a;
  a = b;
  b = c;
  printf("Numbers after swapping are %f and %f \n", a, b);
  return 0;
}
