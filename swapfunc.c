#include<stdio.h>
void swap(int x,int y);
int main(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("before swapping a=%d and b=%d\n",a,b);
    swap(a,b);

}
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("after swapping x=%d and y=%d\n",a,b);

}
