// tjadanel - C Programming 2nd Ed.
// Chapter 6 - Program Exercise 6.1
// This program find the largest number
#include <stdio.h>

int main(void)
{
    int n, largest = 0;
        
    do {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n > largest)
            largest = n;

    } while (n != 0);

        printf("\nThe largest number entered was %d\n", largest);
    return 0;
}