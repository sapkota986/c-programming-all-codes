#include<stdio.h>  
#include<conio.h> 
void main()
{
int year;

printf(" Enter the year \n",year);
scanf("%d",&year);
if(year%4==0 && year%100!=0)
printf("%d is leap year \n",year);
else if(year%400==0)
printf("%d year is leap year",year);
else
printf("%d  is not leap year\n",year);
getch();

}