// tjadanel - C Programming 2nd Ed.
// Chapter 2 - Program Exercise 7.2
// Update squares from 6.3 to consider types
// using getchar
#include <stdio.h>

int main(void)
{
    int i, n;
    char ch;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table:");
    scanf("%d", &n);
    getchar();

    for (i = 1; i <= n; i++) {
      printf("%10d%10d\n", i, i * i);
      if (i % 24 == 0) {
        printf("Press Enter to continue...");
        ch = getchar();
      }
    }

    return 0;
}