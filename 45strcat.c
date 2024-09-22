#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Muizza ";
    char str2[50] = "Muayqeeb";
    strcat(str1, str2); //concatinates strings
    printf("Concatenated string: %s\n", str1);

    return 0;
}
