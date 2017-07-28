// tjadanel - C Programming 2nd Ed.
// Chapter 3 - Program Exercise 3.5
// This program will ask a user to enter 1-16 in any order then display numbers in a 4x4 arrangement
#include <stdio.h>

int main(void)
{
    int aa, ab, ac, ad, ba, bb, bc, bd, ca, cb, cc, cd, da, db, dc, dd;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &aa, &ab, &ac, &ad, &ba, &bb, &bc, &bd, &ca, &cb, &cc, &cd, &da, &db, &dc, &dd);

    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n", aa, ab, ac, ad, ba, bb, bc, bd, ca, cb, cc, cd, da, db, dc, dd);
    printf("Row sums: %d %d %d %d\n", (aa + ab + ac + ad),(ba + bb + bc + bd),(ca + cb + cc + cd),(da + db + dc + dd));
    printf("Column sums: %d %d %d %d\n", (aa + ba + ca + da),(ab + bb + cb + db),(ac + bc + cc + dc),(ad + bd + cd + dd));
    printf("Diagonal sums: %d %d\n", (aa + bb + cc + dd),(da + cb + bc + ad));

    return 0;
}