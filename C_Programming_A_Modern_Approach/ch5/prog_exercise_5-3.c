// tjadanel - C Programming 2nd Ed.
// Chapter 5 - Program Exercise 5.3
// This program adapt broker.c to take shares and share price as well as display a rivals comission
#include <stdio.h>

int main(void){
    int num;
    float commission, price, competitor, value;

    printf("Enter number of shares: ");
    scanf("%d", &num);

    printf("Enter price per share: ");
    scanf("%f", &price);

    value = num * price;



    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\n", commission);

    printf("Rivals comission: $%.2f\n", 33.00f + (num>2000?num*.02f:num*.03f));

    return 0;
}