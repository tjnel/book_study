// tjadanel - C Programming 2nd Ed.
// Chapter 4 - Program Exercise 4.4
// This program will read a number and returns the octal
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number between 0 and 32767: ");
    scanf("%5d", &num);

    printf("The octal of your number is: %d%d%d%d%d\n", ((((num / 8)/ 8)/ 8)/ 8) % 8, (((num / 8)/ 8)/ 8)% 8, ((num / 8)/ 8) % 8, (num / 8) % 8, num % 8 );
    
    return 0;
}