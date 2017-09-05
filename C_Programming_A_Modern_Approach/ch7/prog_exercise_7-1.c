// tjadanel - C Programming 2nd Ed.
// Chapter 7 - Program Exercise 7.1
// Update squares from 6.3 to consider types
// 182 for short and 46341 long/int
#include <stdio.h>

int main(void)
{
    long i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table:");
    scanf("%ld", &n);

    for (i = 1; i <= n; i++)
        printf("%10ld%10ld\n", i, i*i);

    return 0;
}