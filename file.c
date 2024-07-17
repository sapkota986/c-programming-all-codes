#include<stdio.h>
int main(){
    FILE *fptr;
   fptr=fopen("test.txt","w");
   int age;
   char name[100];
   float gpa;
   printf("enter name:");
   scanf("%s",name);
   printf("enter age:");
   scanf("%d",&age); 
   printf("enter name:");
   scanf("%f",&gpa);
   fprintf(fptr,"%s\t",name);
   fprintf(fptr,"%d\t",age);
   fprintf(fptr,"%f\t",gpa);

    fclose(fptr);
    
  return 0;

}