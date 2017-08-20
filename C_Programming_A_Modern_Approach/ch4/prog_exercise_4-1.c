// tjadanel - C Programming 2nd Ed.
// Chapter 4 - Program Exercise 4.1
// This program will read a 2 digit number then reverse it
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    printf("The reversal is: %d%d\n", num % 10, num / 10 );
    
    return 0;
}