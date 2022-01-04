#include "stdio.h"
#include "math.h"

void main()
{
    int year, a, b;
    printf("Please input a year: ");
    scanf("%d", &year);
    a = year % 100;
    if (a == 0)
    {
        b = (year % 400 == 0) ? 1 : 2;
    }
    else
    {
        b = (year % 4 == 0) ? 1 : 2;
    }
    switch (b)
    {
    case 1:
        printf("shi run nian\n");
        break;
    case 2:
        printf("fei run nian\n");
        break;

    default:
        printf("f**k kidding me?\n");
        break;
    }
}