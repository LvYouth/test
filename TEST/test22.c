#include "math.h"
#include "stdio.h"

void main()
{
    // long int f1, f2;
    // int i;
    // f1 = 1;
    // f2 = 1;
    // for (i = 1; i <= 20; i++)
    // {
    //     printf("F(%d)=%12ld\nF(%d)=%12ld\n", i, f1, i + 1, f2);
    //     f1 = f1 + f2;
    //     f2 = f2 + f1;
    // }

    int m, i, k;
    printf("Please input a number:  \n");
    scanf("%d", &m);
    k = sqrt(m);
    for (i = 2; i <= k; i++)
    {
        if (m % i == 0)
            break;
    }
    if (i > k)
    {
        printf("%d is a prime number. \n",sizeof(m));
    }
    else
    {
        printf("%d is not a prime number. \n", m);
    }
}