#include "stdio.h"

void main()
{
    int max(int, int);
    int min(int, int);
    int add(int, int);

    void process(int x, int y, int (*fun)());

    int a, b;

    printf("Enter a and b:");
    scanf("%d %d", &a, &b);

    printf("max = ");
    process(a, b, max);

    printf("min = ");
    process(a, b, min);

    printf("add = ");
    process(a, b, add);
}

int max(int x, int y)
{
    int z;
    if (x > y)
    {
        z = x;
    }
    else
    {
        z = y;
    }
    return z;
}

int min(int x, int y)
{
    int z;
    if (x < y)
    {
        z = x;
    }
    else
    {
        z = y;
    }
    return z;
}

int add(int x, int y)
{
    int sum;
    sum = x + y;
    return sum;
}

void process(int x, int y, int (*fun)())
{
    int result;
    result = (*fun)(x, y);
    printf("%d\n", result);
}