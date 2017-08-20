// tjadanel - C Programming 2nd Ed.
// Chapter 5 - Program Exercise 5.4
// This program will allow you to enter in a wind speed and will out put a description
#include <stdio.h>

int main(void)
{
    int speed;

    printf("Enter wind speed: ");
    scanf("%dm", &speed);

    if (speed < 1){
        printf("Calm\n");
    } else if (speed < 4){
        printf("Light air\n");
    } else if (speed < 28){
        printf("Breeze\n");
    } else if (speed < 48){
        printf("Gale\n");
    } else if (speed < 64){
        printf("Storm\n");
    } else {
        printf("Hurricane\n");
    }
    return 0;
}