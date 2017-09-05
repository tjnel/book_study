// tjadanel - C Programming 2nd Ed.
// Chapter 7 - Program Exercise 7.11
// takes first and last name and displays it as lastname, first initials.
#include <stdio.h>
#include <ctype.h>

int main(void){

    char fi, ch;

    printf("Enter first and last name: ");

    while ((ch = getchar()) == ' ');
    fi = ch;

    while ((ch = getchar()) != ' ');

    while ((ch = getchar()) != '\n') {
        if (ch != ' ')
            putchar(ch);
    }
    printf(", %c.\n", fi);

    return 0;
}