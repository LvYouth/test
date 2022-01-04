#include "stdio.h"
void main()
{
    printf("Please input 3 number:");
    int a, b, c, temp;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        b = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    printf("%d %d %d \n", a, b, c);
}
