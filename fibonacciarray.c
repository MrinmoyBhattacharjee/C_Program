#include<stdio.h>
#include<conio.h>
main()
{
 int arr[100],i,r;
 printf("Enter the range=");
 scanf("%d",&r);
 arr[0]=0;
 arr[1]=1;
 printf("\nfibonacci Series=\n");
 for(i=0;i<r;i++)
 {
 arr[i+2]=arr[i]+arr[i+1];
 printf(" %d",arr[i]);
 }
 getch();
 }