#include "stdio.h"
void main()
{
    // int i, a[10] = {0, 1, 2, 3, 4};
    // for (i = 9; i >= 0; i--)
    // {
    //     printf("%d ", a[i]);
    // }

    int i, max, a[10];
    printf("Input 10 numbers: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("MaxNumber=%d\n", max);
}