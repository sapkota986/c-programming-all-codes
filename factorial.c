#include<stdio.h>
int factorial(int n);
int main(){
int n,fact;
printf("enter the value of n:\n");
scanf("%d",&n);
fact=factorial(n);
printf("%d!=%d",n,fact);
return 0;
}
int factorial(int n){
    // if the value of n is 0 and 1 then it gives the value 1
    if(n==0||n==1) 
    return 1;
    else 
    // if the dvalue enter is not o then it gives the value of n multiply by factorial of n-1
    return (n*factorial(n-1));
}