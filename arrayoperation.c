#include<stdio.h>
#include<conio.h>
main()
{
int arr[100],i,size;
     printf("\nEnter the size=");
 scanf("%d",&size);
     printf("\nEnter %d values of array\n",size);
 for(i=0;i<size;i++)
   scanf("%d",&arr[i]);
     printf("\n values of array before operation are\n");
 for(i=0;i<size;i++)
     printf(" %d",arr[i]);
 for(i=0;i<size;i++)
        if(arr[i]%5==0)
        arr[i]=arr[i]/5;
        else
        arr[i]=arr[i]*2;
    printf("\n values of array after operation are\n");
 for(i=0;i<size;i++)
     printf(" %d",arr[i]);

getch();
}
