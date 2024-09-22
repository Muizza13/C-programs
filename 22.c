#include <stdio.h>
#include <math.h>

int main() {
    long int i, n;
    unsigned long long x = 2;

    printf("Enter the number of terms to be displayed: ");
    scanf("%ld", &n);  
    printf("%llu", x);  

    for (i = 1; i < n; i++) {
        x = pow(x, 2);
        printf(" %llu", x);
    }
    printf("\n");  
    return 0;
}

