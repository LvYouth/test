#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// void main()
// {
//     int i;
//     char *day_name(int n);
//     printf("input Day No:\n");
//     scanf("%d", &i);
//     if (i < 0)
//         exit(1);
//     printf("Day No:%2d--->%s\n", i, day_name(i));
// }

void main()
{
    void sort(char *name[], int n);
    void print(char *name[], int n);

    char *name[] = {"I am your father.", "You are my son.", "F**k you!", "An apple."};
    int n = 4;
    sort(name, n);
    print(name, n);
}

char *day_name(int n)
{
    char *a;
    static char *name[] = {"Illegal day", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    a = ((n > 0 && n < 8) ? name[n] : name[0]);
    return a;
}

void sort(char *name[], int n)
{
    char *temp;
    int i, j, k, num;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {
            num = 0;
            num = strcmp(name[k], name[j]);
            if (num > 0)
            {
                k = j;
            }
            if (k != i)
            {
                temp = name[i];
                name[i] = name[k];
                name[k] = temp;
            }
        }
    }
}

void print(char *name[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }
}
