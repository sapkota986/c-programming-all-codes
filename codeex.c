#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 100
int data;
typedef struct employee
{
    int empno;
    char name[30];
    float salary;
}emp;
void add_record(emp e[])
{
    printf("Enter empno,name and salary");
    scanf("%d%s%f",&e[data].empno,e[data].name,&e[data].salary);
    data++;
    printf("Record added");
}
void display_record(emp e[])
{
    int i;
    if(data == 0)
        printf("No records found\n");
    else
    {
        printf("The records are\n");
        for(i=0;i<data;i++)
        {
            printf("%d %s %f\n",e[i].empno,e[i].name,e[i].salary);
        }
    }
}
void update_record(emp e[])
{
    int tempno,i;
    printf("Enter the empno whose salary is to be increased\n");
    scanf("%d",&tempno);
    for(i=0;i<data;i++)
    {
        if(e[i].empno == tempno)
        {
            e[i].salary = 1.1* e[i].salary;
            printf("%s salary is incread\n",e[i].name);
            break;
        }
    }
    if(i==data)
        printf("%d employee not found",tempno);
}
int main()
{
    int choice;
    emp e[size];
    while(1)
    {
        system("cls");
        printf("Employee Management System\n1.Add Record\n2.Display Record\n3.Update Record\n4.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: add_record(e);
            break;
        case 2: display_record(e);
            break;
        case 3: update_record(e);
            break;
        case 4: exit(0);
        default: printf("Invalid Input\n");
        }
        getch();
    }
    return 0;
}