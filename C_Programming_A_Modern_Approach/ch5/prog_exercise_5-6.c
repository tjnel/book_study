// tjadanel - C Programming 2nd Ed.
// Chapter 5 - Program Exercise 5.6
// This program modify UPC.c to state valid or not valid
#include <stdio.h>

int main(void){
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, c, first_sum, second_sum, total;

    printf("Enter a UPC [12 digits]: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &c);

    first_sum = d + i2 + i4 + j1 + j3 + j5; 
    second_sum = i1 + i3 + i5 + j2 + j4;

    total = (3 * first_sum) + second_sum;


    if (c == 9 - ((total -1) % 10)){
        printf("VALID\n");
    } else {
        printf("NOT VALID\nCheck digit should be: %d\n", 9 - ((total - 1) % 10));
    }

    return 0;
}