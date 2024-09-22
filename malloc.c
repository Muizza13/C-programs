#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int*)malloc(n * sizeof(int));    // Dynamically allocate memory using malloc

    if (ptr == NULL) {   // Check if memory has been allocated successfully
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("You entered: ");
    for(i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);  // Free the dynamically allocated memory
    return 0;
}
