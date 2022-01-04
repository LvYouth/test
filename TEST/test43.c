#include "stdio.h"

void reverse(int *x, int n);

void main()
{
    // int i;
    // int *p;

    // for (i = 0; i < 10; i++)
    // {
    //     printf("%d\t", *(a + i));
    // }
    // printf("\n");
    // for (p = a; p < (a + 10); p++)
    // {
    //     printf("%d\t", *p);
    // }
    
    int i, a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    printf("The original array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    reverse(a, 10);
    printf("The array has benn inverted:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void reverse(int *x, int n)
{
    // int temp, i, j, m;
    // m = (n - 1) / 2;
    // for (i = 0; i <= m; i++)
    // {
    //     j = n - 1 - i;
    //     temp = x[i];
    //     x[i] = x[j];
    //     x[j] = temp;
    // }

    int *p, temp, *i, *j, m;
    m = (n - 1) / 2;
    i = x;              //i指向数组的第一个元素
    j = x + n - 1;      //j指向数组的最后一个元素
    p = m + x;
    for (; i <= p; i++, j--)
    {
        temp = *i;
        *i = *j;
        *j = temp;
    }
}