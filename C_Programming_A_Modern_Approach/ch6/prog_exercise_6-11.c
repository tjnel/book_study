// tjadanel - C Programming 2nd Ed.
// Chapter 6 - Program Exercise 6.11
// This program calculate e factorial
#include <stdio.h>

int main(void)
{
    int n;
    float e = 1.0f;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int i, factorial = 1;
    for (i = 1; i <= n; i++) {
        factorial *= i;
        e += (1.0f / factorial);
    }

    printf("e = %.2f\n", e);
    return 0;
}