#include "stdio.h"

void main()
{
    float max(float x, float y);
    float a, b;
    float c;
    printf("Please input 2 numbers:");
    scanf("%f,%f", &a, &b);
    c = max(a, b);
    printf("Max is %f\n", c);
}

float max(float x, float y)
{
    float z;
    z = x > y ? x : y;
    return (z);
}