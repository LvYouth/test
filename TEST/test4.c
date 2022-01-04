#include "stdio.h"
void main()
{
    char a, b;
    // a = 'x';
    // b = 'y';
    // printf("%c,%c\n", a, b);
    // printf("%d,%d\n", a, b);
    a='a';
    b='b';
    a=a-32;
    b=b-32;
    printf("%c.%c\n%d,%d",a,b,a,b);
}