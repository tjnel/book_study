// tjadanel - C Programming 2nd Ed.
// Chapter 6 - Program Exercise 6.5
// This program will rewrite prog_proj with a do loop and taes in more digits
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The reversal is: ");
    do {
        printf("%d", num % 10 );
        num = num / 10;

    } while (num > 0);
    
    printf("\n");
    return 0;
}