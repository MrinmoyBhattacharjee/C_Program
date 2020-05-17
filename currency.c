#include<stdio.h>
#include<conio.h>
main()
{
int n,choice,notes;
clrscr();
printf("\n\nEnter the total amount:");
scanf("%d",&n);
printf("\n\nEnter the values of notes to start:");
scanf("%d",&choice);
switch(choice)
{
default:
printf("\n\nYou entered a wrong denomination");
break;
case 500:
notes=n/500;
printf("\n\nNo of 500 rs notes=%d",notes);
n=n%500;
case 100:
notes=n/100;
printf("\n\nNo of 100 rs notes=%d",notes);
n=n%100;

case 50:
notes=n/50;
printf("\n\nNo of 50 rs notes=%d",notes);
n=n%50;

 case 20:
notes=n/20;
printf("\n\nNo of 20 rs notes=%d",notes);
n=n%20;

case 10:
notes=n/10;
printf("\n\nNo of 10 rs notes=%d",notes);
n=n%10;

case 5:
notes=n/5;
printf("\n\nNo of 5 rs notes=%d",notes);
n=n%5;

case 2:
notes=n/2;
printf("\n\nNo of 2 rs notes=%d",notes);
n=n%2;

case 1:
notes=n/1;
printf("\n\nNo of 1 rs notes=%d",notes);
n=n%1;
break;
}
getch();
}
