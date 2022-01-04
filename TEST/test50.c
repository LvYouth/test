#include "stdio.h"

// #define PI 3.1415926
// #define S PI*r*r

// void main()
// {
//     double s;
//     int r;

//     printf("Please enter a number :");
//     scanf("%d", &r);
//     // s = PI * r * r;
//     printf("\n%g\n\n", S);
// }

#define PIN1 char*
typedef char* PIN2;

void main(){
    PIN1 x,y;
    PIN2 a,b;
    int c;
    printf("By #define : %d %d\n\n",sizeof(x),sizeof(y));
    printf("By typedef : %d %d\n\n",sizeof(a),sizeof(b));
}