#include<stdio.h>
#include<conio.h>
main()
{
int arr[100],i,n,s=0;
     printf("\nEnter the value of n=");
 scanf("%d",&n);
     printf("\nEnter %d values of array\n",n);
 for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
     printf("\n values of array are\n");
 for(i=0;i<n;i++)
     printf(" %d",arr[i]);
 for(i=0;i<n;i++)
        s=s+arr[i];
     printf("\nSum of Values in an array=%d",s);
getch();
}

