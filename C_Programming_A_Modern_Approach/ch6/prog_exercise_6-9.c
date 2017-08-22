// tjadanel - C Programming 2nd Ed.
// Chapter 6 - Program Exercise 6.9
// This program rewrite prog_proj 2-1 so that it asks how many payments
#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, payment, monthly_interest_rate, payment_amt;
    int i;
    
    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("How many payments: ");
    scanf("%f", &payment_amt);
    
    monthly_interest_rate = (interest_rate / 100) / 12;
    
    for (i=1;i<=payment_amt;i++){
        loan_amount = (loan_amount - payment) + (loan_amount * monthly_interest_rate);
        printf("Balance remaining after payment #%d: $%.2f\n", i, loan_amount);
    }
    return 0;
}