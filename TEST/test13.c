#include "stdio.h"
void main()
{
    // int a, b;
    // printf("Please input A , B:  ");
    // scanf("%d%d", &a, &b);
    // if (a != b)
    //     if (a > b)
    //         printf("A>B\n");
    //     else
    //         printf("A<B\n");
    // else
    //     printf("A=B\n");

    // int a, b, max;
    // printf("\n input two numbers:");
    // scanf("%d%d", &a, &b);
    // printf("max=%d", a > b ? a : b);

    // char ch;
    // scanf("%c", &ch);
    // ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
    // printf("%c\n", ch);

    int a;
    printf("Input interger number: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Mon\n");
        break;
    case 2:
        printf("Tue\n");
        break;
    case 3:
        printf("Wed\n");
        break;
    case 4:
        printf("Thu\n");
        break;
    case 5:
        printf("Fri\n");
        break;
    case 6:
        printf("Sat\n");
        break;
    case 7:
        printf("Sun\n");
        break;
    default:
        printf("error\n");
        break;
    }
}