// Program to find the square root of a number.
#include <stdio.h>
#include <math.h>
int main(void) {
  double x, ans;
  printf("Enter the number whose square root is to find \n");
  scanf("%lf", &x);
  ans=sqrt(x);
  printf("The square-root of %lf is %lf", x, ans);
  return 0;
}