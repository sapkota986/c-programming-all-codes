#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    float cgpa;
    char name[100];
};
int main(){
struct student s1;
s1.rollno=12;
s1.cgpa=2334;
strcpy(s1.name,"Susan");
printf("student name=%s\n",s1.name);
printf("student rollno=%d\n",s1.rollno);
printf("student cgpa=%f\n",s1.cgpa);


    return 0;
}