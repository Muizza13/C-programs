#include <math.h>
#include <stdio.h>
int main() {
  double x, y, ans;
  printf("Enter the base number /n");
  scanf("%lf", &x);
  printf("Enter the power number /n");
  scanf("%lf", &y);
  ans = pow(x, y);
  printf("The answer of %lf to the power %lf is %lf", x, y, ans);
  return 0;
}