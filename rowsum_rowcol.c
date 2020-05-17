#include<stdio.h>
#include<conio.h>
main()
{

int a[10][10],r,c,i,j;

printf("Enter the number of rows=");
scanf("%d",&r);
printf("Enter the number of columns=");
scanf("%d",&c);
printf("\nEnter %d values of matrix=\n",r*c);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);

        printf("\n Values of Matrix are=\n");
        for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
        printf("   %d",a[i][j]);
        printf("\n");
        }

       //row wise summation
          int s1;
       for( i=0;i<r;i++)
       {
          s1=0;
       for(j=0;j<c;j++)
       s1=s1+a[i][j];
       printf("\nSummation of row %d =%d",i+1,s1);
       }

       printf("\n\n");
       //column wise summation
          int s2;
       for( i=0;i<r;i++)
       {
          s2=0;
       for(j=0;j<c;j++)
       s2=s2+a[j][i];
       printf("\nSummation of column %d =%d",i+1,s2);
       }

getch();
}
