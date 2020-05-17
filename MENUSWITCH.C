#include<stdio.h>
#include<conio.h>
main()
{
int x,y,v;
char ch;
printf("\n\nEnter Two numbers:");
scanf("%d%d",&x,&y);
printf("\n\n\t\t########MENU#########\n");
printf("\n + ----> Addition");
 printf("\n - ----> Subtraction");
 printf("\n * ----> Multiplication");
 printf("\n / ----> Division");
printf("\n\nEnter Your Choice:");
ch=getche();

switch(ch)
{
case '+':
			  v=x+y;
			  printf("\n\nAddition=%d",v);
			  break;


case '-':
			  v=x-y;
			  printf("\n\nSubtraction=%d",v);
			  break;
case '*':
			  v=x*y;
			  printf("\n\nMultiplication=%d",v);
			  break;
case '/':
			  v=x/y;
			  printf("\n\nDivision=%d",v);
			  break;
default: printf("\n\nPls enter the correct option");
         break;
			  }
			  getch();
			  }