// Program that takes as input the total marks obtaind by a student and the maximum marks. And produces output in terms of grade of the student. 
#include <stdio.h>
#include<math.h>
int main(void) {
  float x, max, perc;
  printf("Enter the marks obtained \n");
  printf("Enter the maximum marks.\n");
  scanf("%f%f", &x, &max);
  perc=x/max*100;
  if(perc>=90)
    printf("The grade obtained is O");
  else if(perc<90 && perc>=80)
    printf("The grade obatined is A");
  else if(perc<80 && perc>=70)
    printf("The grade obtained is B");
  else if (perc<70 && perc>=60)
    printf("The grade obtained is C");
  else if (perc<60 && perc>=50)
    printf("The grade obtained is D");
  else if (perc<50 && perc>=40)
    printf("The grade obtained is E");
  else if (perc<40)
    printf("Failed");
  else
    printf("The input is wrong");
  return 0;
}