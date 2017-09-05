// tjadanel - C Programming 2nd Ed.
// Chapter 7 - Program Exercise 7.13
// Calculates the average word length
#include <stdio.h>

int main(void)
{
    int word_count=1, total_len=0;
    char ch;
    
    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n'){
        if (ch == ' '){
            word_count++;
        }else{
            total_len++;
        }
    }
    printf("Average word length: %.1f\n", total_len / (float) word_count);
    return 0;
}