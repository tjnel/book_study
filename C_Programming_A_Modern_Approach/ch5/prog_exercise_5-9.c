// tjadanel - C Programming 2nd Ed.
// Chapter 5 - Program Exercise 5.9
// This program take 2 dates and tells you which one is earlier
#include <stdio.h>

int main(void)
{
    int m1, m2, d1, d2, y1, y2;

    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    if (y1 != y2 || (y1 == y2 && m1 != m2) || (y1 == y2 && m1 == m2 && d1 != d2)){
        if (y1 < y2 || (y1 == y2 && m1 < m2) || (y1 == y2 && m1 == m2 && d1 < d2)){
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", m1, d1, y1, m2, d2, y2);
        } else {
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", m2, d2, y2, m1, d1, y1);
        }
    } else {
        printf("Dates %d/%d/%.2d and %d/%d/%.2d are the same.\n", m1, d1, y1, m2, d2, y2);
    }
    
    return 0;
}