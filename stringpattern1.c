#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="programming";
    int i,j,len;
    len=strlen(str);
    for(i=1;i<=7;i++){
        for(j=i;j<=1-i+len;j++){
            printf("%c",str[j-1]);
        }
        printf("\n");
    }
    return 0;
}
// #include<stdio.h>
// #include<string.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// return 0;
// }