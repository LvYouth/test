#include "stdio.h"

void main()
{
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int(*p)[4], i, j;

    p = a;

    do
    {
        printf("i = ");
        scanf("%d", &i);
    } while (i > 2 || i < 0);
    do
    {
        printf("j = ");
        scanf("%d", &j);
    } while (j > 3 || j < 0);
    printf("a[%d, %d] = %d\n", i, j,*(*(p+i)+j));
}