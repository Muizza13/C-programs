#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, n;
    printf("How many times do you want to diplay the series ");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        for(j=1; j<=5; j++)
        printf("%d", j);
    }
    return 0;
}