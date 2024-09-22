// Program to find if a year is leap or not. The year would be entered by the user.
#include <stdio.h>
#include<math.h>
int main(void) {
  /* Conditions for leap year.
 The year is divisible by 4 i.e., y%4=0 and y%100!=0 or y%400=0*/
  int x;
  printf("Enter the year \n");
  scanf("%d", &x);
  if (x%4==0 && x%100!=0 || x%400==0)
    printf("The year is leap");
    else
    printf("The year is not leap");
  return 0;
  
  
}