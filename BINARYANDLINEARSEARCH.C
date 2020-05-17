#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 void binary_search();
 void linear_search();
 int a[50], n, item, loc, beg, mid, end;
main()
{
int i,ch;
printf("\nEnter size of an array: ");
scanf("%d", &n);
printf("\nEnter elements of an array in sorted order:\n");
for(i=0; i<n; i++)
scanf("%d", &a[i]);
printf("\nEnter ITEM to be searched: ");
scanf("%d", &item);
do
{
printf("\n\n\n1. Linear Search\n2. Binary search \n3. Exit\n");
printf("\nEnter your choice: ");
scanf("%d", &ch);
switch(ch)
{
case 1:
linear_search();
break;
case 2:
binary_search();
break;
case 3:
exit(0);
default:
printf("\n\nInvalid choice.Please try again.\n");
}
} while (1);




}
void binary_search()
{

beg=0; end=n-1;
mid=(beg+end)/2;
while((beg<=end) && (a[mid]!=item))
{
if(item < a[mid])
end = mid-1;
else
beg = mid+1;
mid = (beg+end)/2;
}
if(a[mid] == item)
printf("\nITEM exists at location %d", mid+1);
else
printf("\nITEM doesn't exist in the array.");
}
void linear_search()
{
int i;
for (i=0; i<n; i++)
if (item == a[i])
{
printf("\n\nItem found at location %d", i+1);
return;
}
if (i == n)
printf("\n\nItem doesnot exist.");
}