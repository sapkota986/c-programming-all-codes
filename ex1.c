#include<stdio.h>
int main(){
    int r1,r2,i,j;
    printf("enter the range:");
    scanf("%d%d",&r1,&r2);
    for(i=r1;i<=r2;i++){
        for(j=2;j<=i;j++){
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("\n%d",i);
    }
    return 0;
}