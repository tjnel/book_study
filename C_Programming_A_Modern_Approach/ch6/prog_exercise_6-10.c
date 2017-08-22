// tjadanel - C Programming 2nd Ed.
// Chapter 6 - Program Exercise 6.10
// This program modifies prog_proj 5-9 to enter any number of dates
#include <stdio.h>

int main(void)
{
    int s = 0, m1, m2, d1, d2, y1, y2;
    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &m1, &d1, &y1);

    while (1){
        printf("Enter a date (mm/dd/yy) : ");
        scanf("%d/%d/%d", &m2, &d2, &y2);

        if (m2 == 0 && y2 == 0 && d2 == 0)
            break;

        if (y1 != y2 || (y1 == y2 && m1 != m2) || (y1 == y2 && m1 == m2 && d1 != d2)){
            if (y1 < y2 || (y1 == y2 && m1 < m2) || (y1 == y2 && m1 == m2 && d1 < d2)){
                continue;
            } else {
                m1 = m2;
                y1 = y2;
                d1 = d2;
            }
        } else {
            continue;
        }

    }
    printf("%d/%d/%.2d is the earliest date\n", m1, d1, y1);
    return 0;
}