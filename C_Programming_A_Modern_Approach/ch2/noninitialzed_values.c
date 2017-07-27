#include <stdio.h>
// 2.4 - creating a program that declares several int and float variable without initalizing them then printing the values
int main(void) {
    int a,b,c;
    float d,e,f;

    printf("int a is: %d\n", a);
    printf("int b is: %d\n", b);
    printf("int c is: %d\n", c);

    printf("float d is: %.3f\n", d);
    printf("float e is: %.3f\n", e);
    printf("float f is: %.3f\n", f);

    return 0;
}