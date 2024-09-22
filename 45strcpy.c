#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    printf("Enter the first string: ");
    scanf("%s", a);
    strcpy(b, a); //copies strings
    printf("first string: %s\n", a);
    printf("second string: %s\n", b);

    return 0;
}
