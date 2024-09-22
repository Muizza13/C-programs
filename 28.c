#include<stdio.h>
int main()
{
    int i, n, r;
    printf("enter the number you want to reverse ");
    scanf("%d", &n);
    while (n!=0)
    {
        r=n%10;
        printf("%d", r);
        n = n/10;
    }
    return 0;
}