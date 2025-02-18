/*C program to enter the radius of a circle from the user
 and find the area using a user-defined function.*/
#include <stdio.h>
#define PI 3.14159
//function defination
float Area(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius, area;
    
    // Taking input from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Function call
    area = Area(radius);

    // Displaying the result
    printf("The area of the circle is: %f\n", area);

    return 0;
}

