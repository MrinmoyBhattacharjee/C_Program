#include<stdio.h>
#include<conio.h>
main()
{
int n1,n2,x,y;
clrscr();
printf("enter two number");
scanf("%d%d",&n1,&n2);
x=n1;
y=n2;
while(n1!=n2)
{
if(n1>n2)
n1=n1-n2;
else
n2=n2-n1;
}
printf("\nHCF=%d",n1);

printf("\nlcm=%d",x*y/n1);
getch();
}
