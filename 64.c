#include <stdio.h>

int main() {
    int num = 10;      
    int *ptr;          
    ptr = &num;        
    printf("Value of num: %d\n", num);
    printf("Value of num using pointer: %d\n", *ptr);
    printf("Address of num: %p\n", &num);
    printf("Pointer ptr is holding the address: %p\n", ptr);
    *ptr = 20;
    printf("Modified value of num: %d\n", num);

    return 0;
}
