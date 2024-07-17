 #include<stdio.h>
 #include<math.h>
 int main()
 {
//     char i,j;
   
//     // printf("enter the value of n\n");
//     // scanf("%d",&n);

//     for(i=1;i<=5;i++);
//     {
//         for(j=1;j<=i;j++)
//         {
            
                            
//             printf("*");

        
//     }
//         printf("\n");
//     }
float a,b,c,root1,root2,dis,real,img;
printf("Enter the value of a,b,c");
scanf("%f%f%f",&a,&b,&c);
dis=b*b-4*a*c;
if(dis==0){
    printf("Roots are real and equal");
    root1=(-b/(2*a));
    root2=root1;
    printf("root1=%f\troot2=%f",root1,root2);
}
else if(dis>0){
    printf("roots are real and unequal");
    root1=(-b+sqrt(dis))/(2*a);
    root1=(-b-sqrt(dis))/(2*a);
     printf("root1=%f\troot2=%f",root1,root2);
}
else{
    printf("roots are imaginary");
    real=(-b/(2*a));
    img=sqrt(-dis)/(2*a);
     printf("root1=%f+i%f\troot2=%f+i%f",real,img,real,img);
}


  return 0;
}
