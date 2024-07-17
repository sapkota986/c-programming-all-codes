#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    char name[20];
    int rollno;
    float marks;
};
void main(){
    struct student s;
    int i;
    FILE *fptr;
    fptr=fopen("ioe.txt","wb");
    if(fptr==NULL){
        printf("file does not exist");
        getch();
        exit(1);
    }
    for(i=0;i<=2;i++){
        printf("\n student:%d",i+1);
        printf("Enter name:");
        scanf("%s",s.name);
        printf("enter roll no:");
        scanf("%d",&s.rollno);
        printf("enter marks:");
        scanf("%f",&s.marks);
        fwrite(&s,sizeof(s),1,fptr);
    }
    fclose(fptr);
    fptr=fopen("ioe.txt","r");
    if(fptr==NULL){
    printf("file doesnot exist");
    getch();
    exit(1);
    }
    printf("\n Name and roll no of students whose marks is greater or equal ti 40");
    while(fread(&s,sizeof(s),1,fptr)==1){
        if(s.marks>=40){
            printf("\n Name:",s.name);
            printf("\n rollno:",s.rollno);
        }
    }
    fclose(fptr);
    getch();
    }



  