// #include<stdio.h>
// int main()
// {
// int sum(int a,int b);
//     int a,b;
//     printf("Enter the value of a ");
//     scanf("%d",&a);
//     printf("Enter the value of b");
//     scanf("%d",&b);
//    printf("the sum is",sum);
//     return 0;
// }
// int sum(int a,int b){
     
// return a+b;
// }
#include<stdio.h>
int main()
{
    int num,count=0,i;
    printf("enter the value of num:");
    scanf("%d",&num);
            for (i=1;i<=num;i++)
            {
                if(num%i==0){
                count++;
             
                }
            }
        if (count==2)
         
            printf(" %s prime number\n");
         
        else
            printf("%s composite number\n");

       (num%2==0)?(printf("%d is even number",num)):(printf("%d is odd number",num));
return 0;
    }