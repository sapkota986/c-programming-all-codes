#include<stdio.h>
int sum(int n);
int main(){
   int x;
    printf("How many terms?");
    scanf("%d",&x);
   int result= sum(x);
   printf("the sum is %d",result);
   
    return 0;
}
int sum(int n){
    if(n==1)
    return 1;
    else
    return(n*n+sum(n-1));
}
