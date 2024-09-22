#include <stdio.h>

int main() {
    int a, b, c, largest;

    // Input three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Use nested ternary operator to find the largest of the three
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Output the result
    printf("The largest number is: %d\n", largest);

    return 0;
}
