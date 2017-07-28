// tjadanel - C Programming 2nd Ed.
// Chapter 3 - Program Exercise 3.4
// This program will prompt a user to enter a phone number and display it in a different form
#include <stdio.h>

int main(void)
{
    int area_code, first_half, second_half;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area_code, &first_half, &second_half);

    printf("You entered %d.%d.%d\n", area_code, first_half, second_half);
    return 0;
}