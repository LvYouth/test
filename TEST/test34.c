#include "stdio.h"
#include "math.h"

void main()
{
    // int f(int a, int b);
    // int i = 2, p;
    // p = f(i, ++i);
    // printf("%d\n", p);

    // float add(float x, float y);
    // float a, b, c;
    // scanf("%f,%f", &a, &b);
    // c = add(a, b);
    // printf("sum is %f\n", c);

    double x = 2.0, y = 3.0;
    printf("%lf raised to %lf is %lf\n", x, y, pow(x, y));
}

// int f(int a, int b)
// {
//     int c;
//     if (a > b)
//     {
//         c = 1;
//     }
//     else if (a == b)
//     {
//         c = 0;
//     }
//     else
//     {
//         c = -1;
//     }
//     return c;
// }

// float add(float x, float y)
// {
//     float z;
//     z = x + y;
//     return z;
// }
