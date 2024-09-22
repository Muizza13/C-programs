#include <stdio.h>

int main() {
 float a, b, sum;
  printf("please enter the first number \n");
  scanf("%f", &a);
  printf("Please enter the second number \n");
  scanf("%f", &b);
  sum = a + b;
  printf("The sum of %f and %f is %f", a, b, sum); 
  return 0;
}