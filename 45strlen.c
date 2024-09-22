#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);
    printf("The length of the string '%s' is: %d\n", str, length);

    return 0;
}
