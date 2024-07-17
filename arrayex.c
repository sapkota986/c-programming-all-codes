#include<stdio.h>
void print(int arr[],int n);
int main(){
int arr[]={1,3,4,5,5};
print(arr,5);
return 0;
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);

    }
    printf("\n");
}
