#include <stdio.h>

int main() {
    int n, i;

    // Input a number from the user
    printf("Enter a natural number: ");
    scanf("%d", &n);

    // Check for factors of the number
    printf("Factors of %d are: ", n);
    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
