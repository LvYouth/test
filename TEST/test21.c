#include "stdio.h"
#include "math.h"
void main()
{
    // int n;
    // for (n = 100; n <= 200; n++)
    // {
    //     if (0 == n % 3)
    //     {
    //         continue;
    //     }
    //     printf("%d\n", n);
    // }
    int s;
    double n, t, pi;
    t = 1;
    pi = 0;
    n = 1.0;
    s = 1;
    while (fabs(t) > 1e-6)
    {
        pi = pi + t;
        n = n + 2;
        s = -s;
        t = s / n;
    }
    pi = pi * 4;
    printf("pi=%10.6lf\n", pi);
}