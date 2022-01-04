#include "stdio.h"

void main()
{
    char *name[] = {"I am your father.", "You are my son.", "F**k you!", "An apple."};
    char **p;
    int i;
    for (i = 0; i < 4; i++)
    {
        p = name + i;
        printf("%s\n", *p);
    }
}