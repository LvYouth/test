#include "stdio.h"
#include "string.h"

#if 0   
struct student
{
    int num;
    char name[20];
    // char *name;
    float score[3];
};
void print(struct student);
void main()
{
    struct student stu;
    stu.num = 8;
    strcpy(stu.name, "lvyang");
    // stu.name = "lvyang";
    stu.score[0] = 98.5;
    stu.score[1] = 95.5;
    stu.score[2] = 90.0;
    print(stu);
}
void print(struct student stu)
{
    printf("Num    : %d\n", stu.num);
    printf("Name   : %s\n", stu.name);
    printf("score1 : %5.2f\n", stu.score[0]);
    printf("score2 : %5.2f\n", stu.score[1]);
    printf("score3 : %5.2f\n", stu.score[2]);
    printf("\n");
}
#endif

#if 0
struct student
{
    long num;
    float score;
    struct student *netx;
};
void main()
{
    struct student a, b, c, *head;
    a.num = 10101;
    a.score = 89.5;
    b.num = 10103;
    b.score = 99.5;
    c.num = 10107;
    c.score = 75.5;
    head = &a;
    a.netx = &b;
    b.netx = &c;
    c.netx = NULL;
    do
    {
        printf("%ld %5.1f\n", head->num, head->score);
        head = head->netx;
    } while (head);
}
#endif