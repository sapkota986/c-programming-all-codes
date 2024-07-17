#include<stdio.h>
int fibonacci(int n);
int main(){
printf("%d",fibonacci(8));
return 0;
}
int fibonacci(int n){
    
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
int fibonminus1= fibonacci(n-1);
int fibonminus2=fibonacci(n-2);
 int fibon=fibonminus1+fibonminus2;
 return fibon;
}

    
