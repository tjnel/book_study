// tjadanel - C Programming 2nd Ed.
// Chapter 7 - Program Exercise 7.14
// Write a program that computers sq rt using Newtons Method
#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y = 1, avg;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    for (;;) {
        avg = (y + x / y) / 2;
        if (fabs(y - avg) < (.00001f * avg)) {
             printf("Square root: %lf\n", y);
             break;
        }
        
        y = avg;
    }

    return 0;
}