#include<stdio.h>
#include<conio.h>
main()
{
int n,i;
char ch;

do
{

   printf("\nEnter a number=");
scanf("%d",&n);

for(i=1;i<=10;i++)
printf("\n %d X %d= %d",n,i,n*i);
printf("\nEnter your choice(y/n)=");
ch=getche();
   }while(ch =='y');
getch();
}