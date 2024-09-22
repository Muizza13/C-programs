#include<stdio.h>
int main()
{
    int a, b, c, n, i;
printf("Enter the number of terms of Fibonacci series that you want to display ");
scanf("%d", &n);
a=0;
b=1;
if (n==1){
    printf("%d", a);
}
else if (n==2){
    printf("%d %d ", a, b);
}
else {
       for(i=1; i<= n-2; i++){
          c= a+b;
          printf("%d ", c);
          a=b;
          b=c;
        }
}
return 0;
}