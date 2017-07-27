// tjadanel - C Programming 2nd Ed.
// Chapter 2 - Program Exercise 2.8
// This program will calculate the remaining balance on a loan after the 1st, 2nd and 3rd monthly payments
#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, payment, monthly_interest_rate;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    monthly_interest_rate = (interest_rate / 100) / 12;

    loan_amount = (loan_amount - payment) + (loan_amount * monthly_interest_rate);
    printf("Balance remaining after 1st payment: $%.2f\n", loan_amount);

    loan_amount = (loan_amount - payment) + (loan_amount * monthly_interest_rate);
    printf("Balance remaining after 2nd payment: $%.2f\n", loan_amount);

    loan_amount = (loan_amount - payment) + (loan_amount * monthly_interest_rate);
    printf("Balance remaining after 3rd payment: $%.2f\n", loan_amount);

    return 0;
}