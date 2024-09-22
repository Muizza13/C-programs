#include <stdio.h>
int main()
{int a, b, c;
 printf("Enter three numbers: ");
 scanf("%d %d %d", &a, &b, &c);
    if ((a > b) && (a > c))
        printf("a is largest");
    else if ((b > c) && (b > a))
        printf("b is largest");
    else if ((c > a) && (c > b))
        printf("c is largest");
    else 
    printf("All are equal");
    return 0;
}
    
        
