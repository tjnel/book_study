// tjadanel - C Programming 2nd Ed.
// Chapter 7 - Program Exercise 7.10
// Counts vowels in a sentence
#include <stdio.h>
#include <ctype.h>

int main(void){

    int count = 0;
    char ch;

    printf("Enter a sentence: ");
    while ((ch = toupper(getchar())) != '\n'){
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' ||ch == 'U')
            count++;
    }
    
    printf("Your message contains %d vowels.\n", count);

    return 0;
}