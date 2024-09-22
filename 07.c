// Program to check wheather a number is odd or even.
#include <stdio.h>
#include <math.h>
int main() {
  int x;
  printf("Enter the number \n");
  scanf("%d", &x);
  if(x%2==0)
    printf("The number is even");
  else
    printf("The number is odd");
  return 0;
}