#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
float p,r,t,ci,a;
   printf("\nEnter Principal Amount=");

 scanf("%f",&p);
   printf("\nEnter Rate of Interest=");
 scanf("%f",&r);
   printf("\nEnter Time Period=");
 scanf("%f",&t);
        a=p*pow(1+0.01*r,t);        //a=p*pow(1+r/100)^n
        ci=a-p;

     printf("\n\nCompound Interest=%0.2f",ci);
getch();
}