// Program to find the roots of a quadretic equation. The coefficients a, b, c are entered by the user. All cases must be considered.
#include <stdio.h>
#include<math.h>
int main() {
  double a, b, c, disc, r1, r2, realPart, imaginaryPart;
  printf("Enter the value of a, b, c \n");
  scanf("%lf%lf%lf", &a, &b, &c);
  if (a==0) {
    if(b !=0) {
      r1= -c/b;
    printf("You have not entered a quadretic equation");
    printf("The root of the equation is %lf", r1);}}
else
      disc=(b*b)-4*a*c;
    if (disc>0){
      r1= (-b)+sqrt(disc)/2*a;
    r2=(-b)-sqrt(disc)/2*a;
    printf("The roots are real and distinct: %lf and %lf", r1, r2);}
   if (disc==0){
     r1=r2=-b/2*a;
  printf("The roots are real and same: %lf and %lf", r1, r1);}
  if (disc<0){
    realPart= -b/2*a;
  imaginaryPart=sqrt(-disc)/2*a;
  printf("The roots are imaginary: %lf + %lfi and %lf - %lfi", realPart, imaginaryPart, realPart, imaginaryPart);}
  return 0;}