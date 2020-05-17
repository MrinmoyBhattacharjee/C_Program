#include<stdio.h>
#include<conio.h>

void main()

{

  int num,sum=0,r,n;
     clrscr();
     printf("\nEnter a number:");
     scanf("%d",&num);
       n=num;
      while(num>0)
            {
              r=num%10;
              sum=sum*10+r;
             num=num/10;
              }

   printf("\n\nReverse of %d is =%d",n,sum);

  getch();

}