// tjadanel - C Programming 2nd Ed.
// Chapter 5 - Program Exercise 5.11
// This program takes a two digit number and writes it out
#include <stdio.h>

int main(void)
{
    int d1, d2;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &d1, &d2);

    printf("You entered the number ");

    if (d1 == 1){
        switch (d2) {
            case 0: printf("ten"); break;
            case 1: printf("eleven"); break;
            case 2: printf("twelve"); break;
            case 3: printf("thirteen"); break;
            case 4: printf("fourteen"); break;
            case 5: printf("fiveteen"); break;
            case 6: printf("sixteen"); break;
            case 7: printf("seventeen"); break;
            case 8: printf("eightteen"); break;
            case 9: printf("nineteen"); break;
        }
    } else {
        switch (d1) {
            case 2: printf("twenty"); break;
            case 3: printf("thirty"); break;
            case 4: printf("fourty"); break;
            case 5: printf("fifty"); break;
            case 6: printf("sixty"); break;
            case 7: printf("seventy"); break;
            case 8: printf("eighty"); break;
            case 9: printf("ninety"); break;
        }
        switch (d2) {
            case 1: printf("-one"); break;
            case 2: printf("-two"); break;
            case 3: printf("-three"); break;
            case 4: printf("-four"); break;
            case 5: printf("-five"); break;
            case 6: printf("-six"); break;
            case 7: printf("-seven"); break;
            case 8: printf("-eight"); break;
            case 9: printf("-nine"); break;
        }
    }
    printf(".\n");
    return 0;
}