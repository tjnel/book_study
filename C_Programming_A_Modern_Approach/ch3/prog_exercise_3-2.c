// tjadanel - C Programming 2nd Ed.
// Chapter 3 - Program Exercise 3.2
// This program will format product information entered by the user
#include <stdio.h>

int main(void)
{
    int num, month, day, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &num);

    printf("Enter unit price: ");
    scanf("%g", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%.2d/%.2d/%.4d\n", num, price, month, day, year);

    return 0;
}