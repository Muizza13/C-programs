#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    printf("Enter the elements of the integer array:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        sum = sum+ a[i];
    }
    printf("The sum is %d\n", sum);

    return 0;
}
