#include <stdio.h>

// computes the dimensional weight of box from input 
// provided by the user

int main(void)
{
    int height = 10, length = 8, width = 5, volume, weight;

    printf("Enter height of box: ");
    //scanf("%d", &height);
    printf("Enter length of box: ");
    //scanf("%d", &length);
    printf("Enter width of box: ");
    //scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}