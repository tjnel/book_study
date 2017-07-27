// tjadanel - C Programming 2nd Ed.
// Chapter 2 - Program Exercise 2.2
// This program will compute the volume of a sphere with a 10-meter radius
#include <stdio.h>

#define PI 3.14159265358979323846
#define FRACTION (4.0f/3.0f)

int main(void)
{
    int radius = 10, radius_cubed = radius * radius * radius;
    float volume;

    printf("The volume of a %d meter sphere is: %.3f", radius, FRACTION * PI * radius_cubed);

    return 0;
}