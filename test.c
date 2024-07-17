#include<stdio.h>
struct member{
    char name[50];
    char add[50];
    float salary;
};
void increase(struct member[],int);
int main(){
    int i;
    struct member me[5];
    for(i=0;i<5;i++){
    printf("the details of member :%d",i+1);
    printf("enter name ,address,salary\n");
    scanf("%s%s%f",me[i].name,me[i].add,&me[i].salary);
    printf("\n");

    }
    increase(me,5);
    printf("the update information are:");
    for(i=0;i<4;i++){
    printf("enter name=%s ,address=%s,salary=%f\n",me[i].name,me[i].add,me[i].salary);

    }

    return 0;
}
void increase(struct member me[],int x){
    int i;
    for(i=0;i<x;i++){
        me[i].salary=me[i].salary+0.15*me[i].salary;
    }

}