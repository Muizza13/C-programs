#include <stdio.h>
int main() {
    int i,n, product = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        product = product * i;
    }
    printf("The product of the series from 1 to %d is: %d\n", n, product);
    return 0;
}
