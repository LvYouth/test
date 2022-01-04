#include "stdio.h"
void main()
{
    // int i, k, j;
    // printf("\n");
    // for (i = 1; i < 5; i++)
    // {
    //     for (j = 1; j < 5; j++)
    //     {
    //         for (k = 1; k < 5 ; k++)
    //         {
    //             if (i != k && i != j && j != k)
    //             {
    //                 printf("%d,%d,%d\n", i, j, k);
    //             }
    //         }
    //     }
    // }
    float pi = 3.14159, area;
    int r;
    for (r = 1; r <= 10; r++)
    {
        area = pi * r * r;
        if (area > 100)
        {
            continue;
        }
        printf("r=%d,area=%g\n", r, area);
    }
}