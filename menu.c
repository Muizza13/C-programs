#include <stdio.h>

int main() {
    int choice;

    do {
        printf("Menu:\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You selected Option 1.\n");
                break;
            case 2:
                printf("You selected Option 2.\n");
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
