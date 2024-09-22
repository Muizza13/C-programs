#include <stdio.h>
#define PI 3.14159 // Define a macro for PI
#define AREA(radius) (PI * (radius) * (radius))  // Define a macro to calculate the area of a circle

int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");  
    scanf("%f", &radius);
    area = AREA(radius);    
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);  

    return 0;
}
