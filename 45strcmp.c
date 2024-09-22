#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    int result = strcmp(str1, str2); //compare strings
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("String '%s' is less than string '%s'.\n", str1, str2);
    } else {
        printf("String '%s' is greater than string '%s'.\n", str1, str2);
    }

    return 0;
}
