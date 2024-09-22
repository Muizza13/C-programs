// Programme to check if the integer is positive or negative
#include <stdio.h>
#include <math.h>
int main() {
  int x;
  printf("Enter the number \n");
  scanf("%d", &x);
  if (x>0)
    printf("The number is positive");
  else 
    printf("The number is negative");
  return 0;
}