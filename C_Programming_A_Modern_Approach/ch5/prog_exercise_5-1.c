// tjadanel - C Programming 2nd Ed.
// Chapter 5 - Program Exercise 5.1
// This program the calculates how many digits a number contains
#include <stdio.h>

int main(void)
{
    int n, d = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    n/1000?++d:0;
    n/100?++d:0;
    n/10?++d:0;

    printf("The number %d has %d digits\n", n, d );
    
    return 0;
}