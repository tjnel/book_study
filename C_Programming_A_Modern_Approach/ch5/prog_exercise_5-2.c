// tjadanel - C Programming 2nd Ed.
// Chapter 5 - Program Exercise 5.2
// This program 
#include <stdio.h>

int main(void)
{
    int hrs, mins;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hrs, &mins);

    if (hrs > 0 && hrs <= 12 && (mins >= 0 && mins < 60)) {
        printf("Equivalent 12-hour time: %d:%.2d AM\n", hrs, mins);
    } else if (hrs == 0 && (mins >= 0 && mins < 60)) {
        printf("Equivalent 12-hour time: %d:%.2d AM\n", hrs + 12, mins);
    } else if (hrs > 12 && hrs <= 24 && (mins >= 0 && mins < 60)) {
        printf("Equivalent 12-hour time: %d:%.2d PM\n", hrs - 12, mins);
    } else {
        printf("Not a valid time\n");
    }
    return 0;
}