#include<stdio.h>
 #include<conio.h>
 main()
  {
  int i,j,a[100],c,k=0;
  for(i=1;i<=100;i++)
  {
  c=0;
  for(j=1;j<=i;j++)
   if(i%j==0)
   c++;
   if(c==2)
   a[k++]=i;

   }

   for(k=0;k<50;k++)
   if(a[k+1]-a[k]==2)
   printf("\n\n %d  %d",a[k],a[k+1]);
   getch();
   }