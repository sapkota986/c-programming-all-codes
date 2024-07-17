#include<stdio.h>
int main(){
    int n,temp,rem,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem=n%10;
        sum=rem+(sum*10);
        n=n/10;

    }
    if(temp==sum)
        printf("the number is prime number");
        else
        printf("the number is not palindrome");
    
return 0;
}