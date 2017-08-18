// tjadanel - C Programming 2nd Ed.
// Chapter 4 - Program Exercise 4.3
// This program will read a 3 digit number then reverse it, without splitting digits
#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &num1, &num2, &num3);

    printf("The reversal is: %d%d%d\n", num3, num2, num1 );
    
    return 0;
}