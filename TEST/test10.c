#include "stdio.h"
#include "math.h"
void main()
{
    // char c = 'k';
    // int i = 1, j = 2, k = 3;
    // float x = 3e+5, y = 0.85;
    // printf("%d,%d\n", 'a' + 5 < c, -i - 2 * j >= k + 1);
    // printf("%d,%d\n", 1 < j < 5, x - 5.25 <= x + y);
    // printf("%d,%d\n", i + j + k == -2 * j, k == j == i + 5);
    // int a, b, max;
    // printf("\n input two numbers :");
    // scanf("%d%d", &a, &b);
    // max = a;
    // if (a > b)
    // {
    //     max = a;
    //     printf("\n max1=%d", a);
    // }
    // else
    // {
    //     printf("\n max2=%d", b);
    // }
    char c;
    printf("input a character: ");
    c = getchar();
    if (c < 32)
    {
        printf("this is a control character\n");
    }
    else if (c >= '0' && c <= '9')
    {
        printf("this is a digit\n");
    }
    else if (c >= 'A' && c <= 'Z')
    {
        printf("this is a capital letter\n");
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("this is a small letter\n");
    }
    else
    {
        printf("this is an other character\n");
    }
}