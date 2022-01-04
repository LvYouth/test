#include "stdio.h"

void main()
{
    struct date
    {
        int month;
        int day;
        int year;
    };
    struct student
    {
        int num;
        char *name;
        char sex;
        struct date birthday;
        float score;
    } boy1, boy2;

    boy1.num = 007;
    boy1.name = "Jame";
    printf("Please input sex and score\n");
    scanf("%c %f", &boy1.sex, &boy1.score);

    boy2 = boy1;
    printf("Number=%d\nName=%s\n", boy2.num, boy2.name);
}