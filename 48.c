#include <stdio.h>

int main() {
    int arr[5] = {5, 1, 2, 3, 4}; 
    int n = 5; 
    int i, j, change;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                change = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = change;
            }
        }
    }
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
