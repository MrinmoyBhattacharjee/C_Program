//sum of elements of matrix

#include<stdio.h>
#include<conio.h>
main()
{

int a[10][10],r,c,i,j,s=0;

printf("Enter the number of rows=");
scanf("%d",&r);
printf("Enter the number of columns=");
scanf("%d",&c);
printf("\nEnter %d values of matrix=\n",r*c);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);

        printf("\n Values of Original Matrix are=\n");
        for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
        printf("   %d",a[i][j]);
        printf("\n");
        }

     printf("\n Values of Transpose  Matrix are=\n");
        for(i=0;i<c;i++)
        {
        for(j=0;j<r;j++)
        printf("   %d",a[j][i]);
        printf("\n");
        }






getch();
}