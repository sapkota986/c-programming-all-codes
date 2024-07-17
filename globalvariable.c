// global variable example
// #include<stdio.h>
// int a=2;
// int main(){
//     int a=5;
//     printf("the value of a is %d",a);
// }

// static variable example
#include<stdio.h>
void counter(){
    static int count=0;
   
    printf("function called %d times \n",count);
     count++;
}
int main(){

counter();
counter();
counter();

}