#include "stdio.h"

void main()
{
    // int i = 2000;
    // int *pointer;
    // pointer = &i;
    // printf("%d\n", pointer);

    int a, b;
    int *pointer_1, *pointer_2;
    a = 100;
    b = 20;
    pointer_1 = &a;
    pointer_2 = &b;

    printf("%d,%d\n", a, b);
    printf("%d,%d\n", *pointer_1, *pointer_2);
}