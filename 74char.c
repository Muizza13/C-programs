#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = NULL;
    char c;
    int n = 0;

    fp = fopen("1st.txt", "r");
    if (fp == NULL) {
        printf("The file could not be opened\n");
        exit(1);
    }

    while ((c = fgetc(fp)) != EOF) {
        n++;  // Count every character
    }

    fclose(fp);
    printf("The number of characters in the file are %d\n", n);
    return 0;
}
