#include<stdio.h>
#include<conio.h>
main()
{
int n,i;
printf("\n\nEnter a Number=");
scanf("%d",&n);
printf("\n\nFactor of %d are=\n",n);
for(i=1;i<=n;i++)
if(n%i==0)
printf(" %d",i);

getch();
}