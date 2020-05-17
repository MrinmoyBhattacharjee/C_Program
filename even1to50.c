#include<stdio.h>
#include<conio.h>
main()
{
int i;
printf("\n\nEven Numbers from 1 to 50 are\n");
for(i=1;i<=50;i++)   //using for loop
if(i%2==0)
printf("  %d",i);
getch();
}