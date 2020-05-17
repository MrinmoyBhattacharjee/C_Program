#include<stdio.h>
#include<conio.h>
main()
{
int a[10][10],i,j,r,c,sld=0,srd=0;
printf("\nEnter no of rows and columns=\n");
scanf("%d%d",&r,&c);
printf("\nEnter %d Element of matrix=\n",r*c);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
printf("\nElement of Matrix are= \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("  %d",a[i][j]);
printf("\n");
}
  //sum of left diagonal
for(i=0;i<r;i++)
for(j=0;j<c;j++)
if(i==j)
sld=sld+a[i][j];
printf("\nSum of left diagonal=%d",sld);

    //sum of right diagonal
for(i=0,j=c-1;i<r && j>=0;i++,j--)
srd=srd+a[i][j];
printf("\n\n Sum of right diagonal=%d",srd);


getch();
}