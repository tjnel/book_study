// tjadanel - C Programming 2nd Ed.
// Chapter 5 - Program Exercise 5.7
// This program finds smallest and largest int entered by user
#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, min = 0, max = 0;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 >= n2) {
        max = n1;
    } else {
        max = n2;
        min = n1;
    }

    if (n3 > max) {
        max = n3;
    } else if (n3 < min) {
        min = n3;
    }
    
    if (n4 > max) {
        max = n4;
    } else if (n4 < min) {
        min = n4;
    }

    printf("Largest: %d\nSmallest %d\n", max, min);
    
    return 0;
}