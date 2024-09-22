#include <stdio.h>
#include <math.h>

int main() {
    int num, m, r, n = 0, result = 0, power;
    printf("Enter an integer: ");
    scanf("%d", &num);

    m = num;

    while (m != 0) {
        m /= 10; //m = m/10
        ++n;
    }

    m = num;
    power = n;

    while (m != 0) {
        r = m % 10;
        result += pow(r, power);
        m /= 10;
    }
    
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
