// tjadanel - C Programming 2nd Ed.
// Chapter 6 - Program Exercise 6.12
// This program 
#include <stdio.h>

int main(void)
{
    float n, e = 1.0f;

    printf("Enter a small floating point number: ");
    scanf("%f", &n);

    int term = 1, factorial = 1;
    for (;;) {

        factorial *= term;

        if (1.0f / factorial < n) {
            break;
        }   

        e += (1.0f / factorial);
        term++;
    }

    printf("Result is: %f\n", e);
    return 0;
}