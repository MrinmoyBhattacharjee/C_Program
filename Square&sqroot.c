#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int n,s;
float sr;
   printf("\nEnter a Number=");

 scanf("%d",&n);
  s=n*n;
  sr=sqrt(n);

      printf("\n\nSquare of %d is=%d",n,s);
       printf("\n\nSquare Root of %d is=%f",n,sr);
getch();
}