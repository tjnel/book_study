// tjadanel - C Programming 2nd Ed.
// Chapter 6 - Program Exercise 6.3
// This program 
#include <stdio.h>

int main(void)
{
    int n, n2, m, d, remainder;
    printf("Enter a fraction: ");
    scanf("%1d / %d", &n, &d);

    

    m = n;
    n2 = n;
    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In lowest terms: %d/%d\n", n2 / m, (d / m));





    return 0;
}