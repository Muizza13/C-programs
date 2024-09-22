#include <stdio.h>

void swap(int *p1, int *p2);  // Function declaration

int main() {
    int x, y;
    printf("Enter the 2 integers: ");
    scanf("%d %d", &x, &y);  
    printf("The numbers before swapping are %d and %d\n", x, y);  
    swap(&x, &y);  
    printf("The numbers after swapping are %d and %d\n", x, y);  // Print swapped variables
    return 0;
}

void swap(int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
