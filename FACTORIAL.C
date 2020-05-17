#include<stdio.h>
#include<conio.h>
main()
{
long int n,i,fact=1;;
printf("\n\nEnter a Number=");
scanf("%ld",&n);
printf("\n\nFactorial of %d are=\n",n);
for(i=1;i<=n;i++)
  fact=fact*i;
printf(" %ld",fact);

getch();
}