#include <stdio.h>

int fibo(int n) {
    if (n <= 1) {
        return n;
    } 
    else {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main() {
    int terms, i;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

    printf("Fibonacci series up to %d terms:\n", terms);

    for (i = 0; i < terms; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");

    return 0;
}
