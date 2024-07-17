#include<stdio.h>
struct student{
    int roll;
    char name[50];
    char add[50];
    float marks;
};
int main(){
    int i;
    struct student st[4];
    for(i=0;i<4;i++){
        printf("the students details of student:%d\n",i+1);
        printf("enter student roll no: \t and Name: \t and address:  \t and marks:\n");
        scanf("%d%s%s%f",&st[i].roll,st[i].name,st[i].add,&st[i].marks);
        printf("\n");
    }
    printf("students with marks between 50 and 70:\n");
    for(i=0;i<4;i++)
    {
        if (st[i].marks>=50.0&&st[i].marks<=70.0){
            printf("roll no:%d \n name:%s\n address:%s\n marks:%f\n",st[i].roll,st[i].name,st[i].add,st[i].marks);
        }
    }


    return 0;
}