#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[3][3],b[3][3],c[3][3],i,j,k,m,n,p,q;
    printf("enter the order of the first matrix:");
    scanf("%d%d",&m,&n);
    printf("enter the order of the second matrix:");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("matrix cannot be multiplied");
        exit(0);
    }

    printf("enter the first matrix");
    for(i=0;i<m;i++){
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    
         printf("enter the second matrix");
    for(i=0;i<p;i++)
    for(j=0;j<q;j++)
        scanf("%d",&b[i][j]);
    }
     for(i=0;i<m;i++){
    for(j=0;j<q;j++){
        c[i][j]=0;
        for(k=0;k<p;k++){
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    }
    }
    printf("the resultant matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}