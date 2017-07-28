// tjadanel - C Programming 2nd Ed.
// Chapter 3 - Program Exercise 3.1
// This program will get a date from the user and display it in yyyymmdd format
#include <stdio.h>

int main(void)
{
    int day, month, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %.4d%.2d%.2d\n", year, month, day);

    return 0;
}