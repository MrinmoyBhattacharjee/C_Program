#include<stdio.h>
#include<conio.h>
main()
{
int a[10][10],b[10][10],m[10][10],r1,r2,c1,c2,i,j,k;

//  first matrix insertion and diplay

printf("\nEnter no of rows and column for first matrix=\n");
scanf("%d%d",&r1,&c1);
printf("\nEnter %d values of first matrix\n",r1*c1);
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);
 printf("\nvalues of first matrix are=\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
printf(" %d",a[i][j]);
printf("\n");
}
	//second matrix insertion and diplay
printf("\nEnter no of rows and column for first matrix=\n");
scanf("%d%d",&r2,&c2);
printf("\nEnter %d values of first matrix\n",r2*c2);
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
scanf("%d",&b[i][j]);

 printf("\nvalues of second matrix are=\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
printf(" %d",b[i][j]);
printf("\n");
}
//matrix multiplication
 printf("\nMatrix multiplication\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
m[i][j]=0;
for(k=0;k<r1;k++)
{
m[i][j]=m[i][j]+a[i][k]*b[k][j];
}
printf(" %d",m[i][j]);
}
printf("\n");
}
getch();
}
