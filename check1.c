#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee{
        char name[50];
        int id;
        float salary;
};
int main(){
        struct employee e;
        int i,n;
        printf("enter the number of employee: ");
        scanf("%d",&n);
        FILE *fptr;
        fptr= fopen("employee.txt","a");
        if(fptr==NULL){
                printf("file cannot be opened");
           
                exit(1);
        }
        for(i=0;i<n;i++){
                printf("employee number :%d",i+1);
                printf("\n Enter employee name:");
                scanf(" %s",e.name);
                printf("\n Enter employee id:");
                scanf("%d",&e.id);
                printf("\n Enter employee salary:");
                scanf("%f",&e.salary);
                fwrite(&e,sizeof(e),1,fptr);
               
        }
         fclose(fptr);
        fptr=fopen("employee.txt","r");
        if(fptr==NULL){
                printf("file cannot be opened\n");
              
                exit(1);

        }
        printf("employee details:\n");
       while(fread(&e,sizeof(e),1,fptr)==1){
        printf("employee name :%s",e.name);
        printf("employee id:%d",e.id);
        printf("employee salary:%f",e.salary);
       }
fclose(fptr);
getchar();
return 0;
}
