#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    do {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    } while (num != 0);

    printf("Reversed number: %d\n", reverse);
    return 0;
}
