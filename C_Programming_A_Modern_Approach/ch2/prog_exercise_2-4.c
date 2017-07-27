// tjadanel - C Programming 2nd Ed.
// Chapter 2 - Program Exercise 2.4
// This program will ask a user to enter dollar and cent amount then display the amount with 5% tax added
#include <stdio.h>

#define TAX 0.05f

int main(void)
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("With tax added: $%.2f\n", amount + (amount * TAX));

    return 0;
}