#include "stdio.h"
#include "stdlib.h"

void main(int argc, char *argv[])
{
    int i;
    printf("The number of string is : %d\n", argc - 1);
    for (i = 1; i < argc; i++)
    {
        printf("The string %d is : %s\n", i, argv[i]);
    }
}