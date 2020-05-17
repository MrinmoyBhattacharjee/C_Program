#include<stdio.h>
#include<conio.h>

void main()

{

  int num,sum=0,r;
     clrscr();
     printf("\nEnter a number:");
     scanf("%d",&num);

      while(num>0)
            {
              r=num%10;
              sum=sum+r;
             num=num/10;
              }

   printf("\n\nSum of digit =%d",sum);

  getch();

}


