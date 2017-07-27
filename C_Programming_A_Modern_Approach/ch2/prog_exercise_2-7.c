// tjadanel - C Programming 2nd Ed.
// Chapter 2 - Program Exercise 2.7
// This program will ask a user for a dollar amount and then show how to pay that amount in the smallest number of each bill
#include <stdio.h>

int main(void)
{
    int amount, bills;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    bills = amount / 20;
    amount = amount - (20 * bills);

    printf("$20 bills: %d\n", bills);

    bills = amount / 10;
    amount = amount - (10 * bills);

    printf("$10 bills: %d\n", bills);

    bills = amount / 5;
    amount = amount - (5 * bills);

    printf(" $5 bills: %d\n", bills);

    bills = amount;

    printf(" $1 bills: %d\n", bills);

    return 0;
}