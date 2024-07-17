#include<stdio.h>
#include<math.h>
int factorial(int n){
    if(n==0)
    return 1;
    else
    return n*factorial(n-1);

}
int main(){
int i,n,sign=-1;
float x,sum=0,x1;
printf("Enter the value of x and n");
scanf("%f%d",x,n);
x1=x;
x=x*(3.1415/180);
for(i=1;i<=n;i++)
{
    sign=(-1)*sign;
    sum=sum+sign*pow(x,i)/factorial(i);
}
printf("sin(%.2f)=%.2f",x,sum);
return 0;
}