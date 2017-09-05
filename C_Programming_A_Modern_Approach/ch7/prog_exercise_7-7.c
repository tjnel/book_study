// tjadanel - C Programming 2nd Ed.
// Chapter 7 - Program Exercise 7.7
// Modify Prog Proj 3.6
#include <stdio.h>


int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char ch;

    printf("Enter two fractions separated by a desired sign: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &ch, &num2, &denom2);

    switch(ch){
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '*':
            result_num = (num1 * denom2) * (num2 * denom1);
            result_denom = denom1 * denom2;
            break;
        case '/':
            result_num = (num1 * denom2) / (num2 * denom1);
            result_denom = denom1 * denom2;
            break;
        default:
            printf("Error! Operator not found!");
            break;
    }
    

    printf("The sum is %d/%d\n", result_num, result_denom);
    return 0;
}