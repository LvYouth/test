#include "stdio.h"
#include "stdlib.h"

#define NUM 3

#if 0
void main()
{
    struct student
    {
        int num;
        char *name;
        char sex;
        float score;
    } boy1, boy2 = {102, "Jane", 'M', 99.8};

    boy1 = boy2;

    printf("Number:%d\nName:%s\nSex:%c\nScore:%.2f\n", boy2.num,boy2.name,boy2.sex,boy2.score);
    printf("\n");
    printf("Number:%d\nName:%s\nSex:%c\nScore:%.2f\n", boy2.num,boy2.name,boy2.sex,boy2.score);
}
#endif

#if 1

struct person
{
    char name[20];
    char phone[10];
};

void main()
{
    struct person man[NUM];
    int i;
    for (i = 0; i < NUM; i++)
    {
        printf("Input name:\n");
        gets(man[i].name);
        printf("Input phone:\n");
        gets(man[i].phone);
    }
    printf("\tName\t\t\t\tPhone\n\n");
    for (i = 0; i < NUM; i++)
    {
        printf("%10s\t\t\t\t%10s\n", man[i].name, man[i].phone);
    }
    system("pause");
}
#endif