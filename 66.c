#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];  
    int *ptr = arr;  // Initialize a pointer to the first element of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);  // Take input directly using the pointer
    }
    printf("The contents of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));  // Access array elements using pointer arithmetic
    }
    printf("\n");
    return 0;
}
