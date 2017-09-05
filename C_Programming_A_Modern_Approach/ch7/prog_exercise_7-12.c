// tjadanel - C Programming 2nd Ed.
// Chapter 7 - Program Exercise 7.12
// Evaluates an expression
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    float num = 0.0f, total = 0.0f;
    char ch;

    printf("Enter an expression: ");
    scanf("%f", &total);
    
    while ((ch = getchar()) != '\n') {

        switch (ch) {
            case '+':
                scanf("%f", &num);
                total += num;
                break;
            case '-':
                scanf("%f", &num);
                total -= num;
                break;
            case '*':
                scanf("%f", &num);
                total *= num;
                break;
            case '/':
                scanf("%f", &num);
                total /= num;
                break;
            default:
                continue;
        }
    }
    printf("Value of expression: %.2f\n", total);

    return 0;
}