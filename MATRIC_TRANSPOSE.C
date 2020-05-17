#include<stdio.h>
#include<conio.h>
main()
{
 int a[10][10],i,j,r,c;
 printf("Enter no of rows and columns=\n");
 scanf("%d%d",&r,&c);
 printf("\nEnter %d values=\n",r*c);
 for(i=0;i<r;i++)
 for(j=0;j<c;j++)
 scanf("%d",&a[i][j]);
 printf("\nOriginal Matrix are\n");
 for(i=0;i < r;i++)
 {
 for(j=0;j < c;j++)
 printf(" %d",a[i][j]);
   printf("\n");
 }
 printf("\n Transpose of Matrix are\n");

 for(i=0;i< c;i++)
 {
 for(j=0;j< r;j++)
 printf(" %d",a[j][i]);
   printf("\n");
 }
 getch();
 }