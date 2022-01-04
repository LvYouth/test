#include "stdio.h"
#include "malloc.h"
#include "stdlib.h"

#define LEN sizeof(struct student)

struct student *creat();
struct student *del(struct student *head, int num);
void print(struct student *head);

struct student
{
    int num;
    float score;
    struct student *next;
};

int n;

void main()
{
    struct student *stu,*p;
    int n;

    stu = creat();
    p=stu;
    print(p);

    printf("Please enter the num to delete: ");
    scanf("%d",&n);
    print(del(p,n));

    printf("\n\n");
    system("pause");
}

struct student *creat()
{

    struct student *head;
    struct student *p1, *p2;

    p1 = p2 = (struct student *)malloc(LEN);

    printf("Please enter the num :");
    scanf("%d", &p1->num);
    printf("Please enter the score :");
    scanf("%f", &p1->score);

    head = NULL;
    n = 0;

    while (p1->num)
    {
        n++;
        if (1 == n)
        {
            head = p1;
        }
        else
        {
            p2->next = p1; // p2所指向的结构的next赋值为p1指向的结构
        }
        p2 = p1;
        p1 = (struct student *)malloc(LEN);
        printf("\nPlease enter the num :");
        scanf("%d", &p1->num);
        printf("Please enter the score :");
        scanf("%f", &p1->score);
    }
    p2->next = NULL;
    return head;
}

void print(struct student *head)
{
    struct student *p;
    printf("\nThere are %d records!\n\n", n);

    p = head;
    if (head)
    {
        do
        {
            printf("The number %d's score is %5.2f \n", p->num, p->score);
            p = p->next;
        } while (p);
    }
}

struct student *del(struct student *head, int num)
{
    struct student *p1, *p2;
    if (NULL == head)
    {
        printf("\nThis list is null!\n");
        goto END;
    }
    p1 = head;
    while (p1->num != num && p1->next != NULL)
    {
        p2 = p1;
        p1 = p1->next;
    }
    if (num == p1->num)
    {
        if (p1 == head) //当要删除的结点位于头结点的时候
        {
            head = p1->next;
        }
        else //一般情况
        {
            p2->next = p1->next;
        }
        printf("\nDelete %d succeed!\n", num);
        n = n - 1; // n是作为一个全局变量，用于记录链表的数据个数
    }
    else
    {
        printf("%d not been found!\n", num);
    }
END:
    return head;
}
