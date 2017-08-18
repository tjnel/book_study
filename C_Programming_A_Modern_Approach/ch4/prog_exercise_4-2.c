// tjadanel - C Programming 2nd Ed.
// Chapter 4 - Program Exercise 4.2
// This program will read a 3 digit number then reverse it
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    printf("The reversal is: %d%d%d\n", num % 10, (num / 10)%10, num / 100 );
    
    return 0;
}