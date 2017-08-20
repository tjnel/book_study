// tjadanel - C Programming 2nd Ed.
// Chapter 5 - Program Exercise 5.10
// This program converts a numerical grade to a letter grade
#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    if (grade < 0 || grade > 100){
        printf("ERROR: Invalid Grade\n");
    } else {
        printf("Letter Grade: ");
        switch (grade / 10){
            case 10: case 9: printf("A\n"); break;
            case 8: printf("B\n"); break;
            case 7: printf("C\n"); break;
            case 6: printf("D\n"); break;
            default: printf("F\n"); break;
        }
    }
    return 0;
}