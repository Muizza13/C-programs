#include <stdio.h>
int main()
{
    float i, n, sum=1;
    printf("Enter the number of terms upto which you want to find the sum ");
    scanf("%f", &n);
    for (i=2; i<=n; i=i+2){
        sum=sum+(1/i);
    }
    printf("Sum of the series is %f ", sum);
}