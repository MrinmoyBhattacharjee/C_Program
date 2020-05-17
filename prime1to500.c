#include<stdio.h>
#include<conio.h>
main()
{
int n=1,i,count;


for(n=1;n<=500;n++)
{
 count=0;
 for(i=1;i<=n;i++)
if(n%i==0)
count++;

if(count==2)
printf(" %d",n);
  }
getch();
}