// tjadanel - C Programming 2nd Ed.
// Chapter 3 - Program Exercise 3.3
// This program will break down a ISBN entered by the user
#include <stdio.h>

int main(void)
{
    int prefix, group_id, pub_code, item_num, chk_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group_id, &pub_code, &item_num, &chk_digit);
    
    printf("GS1 prefix: %d\nGroup identifer: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", prefix, group_id, pub_code, item_num, chk_digit);
    return 0;
}