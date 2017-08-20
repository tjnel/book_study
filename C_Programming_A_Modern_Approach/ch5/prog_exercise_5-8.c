// tjadanel - C Programming 2nd Ed.
// Chapter 5 - Program Exercise 5.8
// This program displays closes departure and arrival for flights near time provided.
#include <stdio.h>

int main(void)
{
    int hh, mm, mins_since_midnight;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hh, &mm);

    mins_since_midnight = hh * 60 + mm;

    if (mins_since_midnight <= ((8 * 60) + (103 / 2)))
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    else if (mins_since_midnight < ((9 * 60) + 43) + (96 / 2))
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    else if (mins_since_midnight < ((11 * 60) + 19) + (88 / 2))
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    else if (mins_since_midnight <= ((12 * 60) + 47) + (73 / 2))
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    else if (mins_since_midnight <= ((14 * 60) + (105 / 2)))
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    else if (mins_since_midnight <= ((15 * 60) + 45) + (195 / 2))
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    else if (mins_since_midnight <= ((19 * 60) + (165 / 2)))
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    else 
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");

    
    return 0;
}