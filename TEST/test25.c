#include "stdio.h"

void main()
{
    // long int i;
    // int a[20] = {1, 1};
    // for (i = 2; i < 20; i++)
    // {
    //     a[i] = a[i - 2] + a[i - 1];
    // }
    // for (i = 0; i < 20; i++)
    // {
    //     printf("a[%d]=%d\n", i, a[i]);
    // }

    //冒泡法
    int a[10];
    int i, j, temp;
    printf("Please input 10 numbers: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 9; j > 0; j--)
    {
        for (i = 0; i < j; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
}