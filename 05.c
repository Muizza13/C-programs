#include <stdio.h>
#include<math.h>
#define g 9.8  

int main() {
    double time, distance;
    printf("Enter the time in seconds: ");
    scanf("%lf", &time);
    distance = 0.5 * g * time * time;
    printf("The object has fallen %.2f meters in %.2f seconds.\n", distance, time);

    return 0;
}
