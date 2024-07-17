// #include<stdio.h>
// int fibo(int );
// int main()
// {
//     int n;
//     printf("enter the value of n");
//     scanf("%d",&n);
//     printf("%d",fibo(n));

// }
// int fibo(int n){
//         return 0;
//     if(n==0){ 
//     }
//     if(n==1){
//         return 1;
//     }
//     int fibonminus1=fibo(n-1);
//     int fibonminus2=fibo(n-2);
//     int fibon=fibonminus1+fibonminus2;
// }
#include<stdio.h>
void fibo(int,int,int);
int main(){
int a=1,b=1,n;
printf("\n enter the number of terms:");
scanf("%d",&n);
printf("%d\t%d\t",a,b);
fibo(a,b,n-2);
    return 0;
}
void fibo(int a,int b,int n){
    int c;
    if(n<=0){
        return;
    }else{
        c=a+b;
        printf("%d\t",c);
    }
    fibo(b,c,n-1);

}

    


