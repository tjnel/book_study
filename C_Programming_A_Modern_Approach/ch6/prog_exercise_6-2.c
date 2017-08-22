// tjadanel - C Programming 2nd Ed.
// Chapter 6 - Program Exercise 6.2
// This program finds the GCD of 2 ints
#include <stdio.h>

int main(void)
{
    int m, n, remainder;
    
    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);
    
    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    
    printf("Greatest common divisor: %d\n", m);

    return 0;
}