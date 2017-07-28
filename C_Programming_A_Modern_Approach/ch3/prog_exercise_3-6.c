// tjadanel - C Programming 2nd Ed.
// Chapter 3 - Program Exercise 3.6
// This program will be a modified addfrac that will take both fractions at the same time seperated by a plus sign
#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is %d/%d\n", result_num, result_denom);
    return 0;
}