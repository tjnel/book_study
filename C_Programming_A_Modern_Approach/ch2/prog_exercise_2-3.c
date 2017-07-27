// tjadanel - C Programming 2nd Ed.
// Chapter 2 - Program Exercise 2.3
// This program will compute the volume of a sphere with a radius provided by the user
#include <stdio.h>

#define PI 3.14159265358979323846
#define FRACTION (4.0f/3.0f)

int main(void)
{
    int radius;
    float volume;

    printf("What radius would you like to calculate the volume for?: ");
    scanf("%d", &radius);
    
    int radius_cubed = radius * radius * radius;

    printf("The volume of a %d meter sphere is: %.2f\n", radius, FRACTION * PI * radius_cubed);

    return 0;
}