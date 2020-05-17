#include<stdio.h>
#include<conio.h>
 main()

   {
  int a[10][10],i,j,r,c;
    printf("\nEnter no of rows and columns values in equal size=\n");
      scanf("%d%d",&r,&c);
    printf("\nEnter %d Element of matrix=\n",r*c);


  for(i=0;i<r;i++)
      for(j=0;j<c;j++)
           scanf("%d",&a[i][j]);
      printf("\nThe matrix is\n");
  for(i=0;i<r;i++)
    {
      printf("\n");
      for(j=0;j<c;j++)
           printf("  %d",a[i][j]);
    }
      printf("\n Setting zero in upper triangular matrix\n");
   for(i=0;i< r;i++)
     {
    for(j=0;j< c;j++)
           if(i<=j)
             printf(" %d",a[i][j]);
           else
				 printf(" %d",0);
				 printf("\n");
     }
    getch();
   }