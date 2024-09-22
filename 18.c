#include <stdio.h>

int main() {
    int i, n, fac=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fac *= i;
        }
        printf("The factorial of %d is: %d\n", n, fac);
    }
    return 0;
}
