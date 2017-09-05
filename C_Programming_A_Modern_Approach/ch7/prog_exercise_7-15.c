// tjadanel - C Programming 2nd Ed.
// Chapter 7 - Program Exercise 7.15
// Computes factorial
// short = 7, int/long/longlong = 12, float = 34 , double = 170 , long double = 1754
#include <stdio.h>

int main(void)
{
    int i, n;
    long double fact = 1.0f;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d: %.0Lf\n", n, fact);

    return 0;
}