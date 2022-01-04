#include "stdio.h"

void main()
{
    int a[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    // printf("a:\t%d\n", a);
    // printf("*a:\t%d\n", *a);
    // printf("a[0]:\t%d\n", a[0]);
    // printf("&a[0]:\t%d\n", &a[0]);
    // printf("&a[0][0]:\t%d\n", &a[0][0]);
    // printf("a+1:\t%d\n", a + 1);
    // printf("*(a+1):\t%d\n", *(a + 1));
    // printf("");
    int(*p)[4];
    int i, j;
    p = a;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%2d\t", *(*(p + i) + j));
        }
        printf("\n");
    }
}