// tjadanel - C Programming 2nd Ed.
// Chapter 2 - Program Exercise 2.5
// This program will ask a user to enter value x then display the value of a specific polynomial
#include <stdio.h>

int main(void)
{
    int x, result;

    printf("Enter x: ");
    scanf("%d", &x);

    result = (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6;

    printf("Result = %d\n", result);

    return 0;
}