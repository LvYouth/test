#include "stdio.h"

void main()
{
    int a, b, *p1, *p2, *p;
    scanf("%d,%d", &a, &b);
    p1 = &a;
    p2 = &b;

    if (*p1 < *p2)
    {
        p = p1;
        p1 = p2;
        p2 = p;
    }
    printf("a=%d,b=%d\n", a, b);
    printf("max=%d,min=%d\n", *p1, *p2);
}