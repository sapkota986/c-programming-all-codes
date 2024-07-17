// #include<stdio.h>
// int main(){
//     int r1,r2,i,j;
//     printf("enter the range\n");
//     scanf("%d%d",&r1,&r2);
//     for(i=r1;i<=r2;i++)
//     {
//         for(j=2;j<=i;j++)
//         {
//             if(i%j==0)
//             break;
//         }
        
//         if(i==j)
//         printf("\n%d",i);
// }
//     return 0;
// }
#include <stdio.h>
int main() {
  int num,i;
  printf("enter a number:");
  scanf("%d",&num);
  if(num<=0){
    printf("%d",num);
  }
  else if(num==1){
    printf("neither prime nor composite");
  }
  else if(num==2){
    printf("2 is smallest prime number");
  }
  else{
    int flag=0;
    for(i=2;i<num/2;i++){
      if(num%i==0)
      {
        flag=1;
        break;
      }
    }
    if(flag==0){
      printf("%d is a prime number",num);
    }
    else{
      printf("%d is composite number",num);
    }
      printf("\n%d is %s",num,num%2==0?"even":"odd"); 
    
  }
  return 0;
}