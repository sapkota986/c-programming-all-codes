#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) 2*exp(x)
int main(){
	float h,x,d;
	printf("enter the value at which derivative is required\n");
	scanf("%f",&x);
	printf("enter the increment h\n");
	scanf("%f",&h);
	d=((f(x))-(f(x-h)))/h;
	printf("value of derivative =%f\n",d);
	return 0;
}
