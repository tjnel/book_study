// tjadanel - C Programming 2nd Ed.
// Chapter 7 - Program Exercise 7.9
// Converts 12 hour time to 24 hour
#include <stdio.h>

int main(void)
{
    int hh, mm;
    char tt;

    printf("Enter a 12-hour time: ");
    scanf("%2d:%2d %c", &hh, &mm, &tt);

    if (tt == 'p' || tt == 'P')
    hh += 12;

    printf("Equivalent 24-hour time: %2d:%2d\n", hh, mm);

    return 0;
}