#include<stdio.h>
#include<conio.h>

main()
{

 int a[10][10],b[10][10],s[10][10],i,j,r,c;
 printf("\nEnter no of rows=");
 scanf("%d",&r);
 printf("\nEnter no of columns=");
 scanf("%d",&c);
 printf("\nEnter %d Values of First matrix=\n",r*c);
      for(i=0;i<r;i++)
      for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);

      printf("\nValues of First matrix are=\n");
           for(i=0;i<r;i++)
           {

      for(j=0;j<c;j++)
      printf(" %d",a[i][j]);
      printf("\n");
      }

      printf("\nEnter %d Values of Second matrix=\n",r*c);
      for(i=0;i<r;i++)
      for(j=0;j<c;j++)
      scanf("%d",&b[i][j]);

      printf("\nValues of Second matrix are=\n");
           for(i=0;i<r;i++)
           {

      for(j=0;j<c;j++)
      printf(" %d",b[i][j]);
      printf("\n");
      }
     for(i=0;i<r;i++)
      for(j=0;j<c;j++)
      s[i][j]=a[i][j]+b[i][j];
        printf("\nSum of two matrices are\n");
       for(i=0;i<r;i++)
           {

      for(j=0;j<c;j++)
      printf(" %d",s[i][j]);
      printf("\n");
      }

 getch();

}