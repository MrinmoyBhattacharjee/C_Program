#include<stdio.h>
#include<conio.h>
main()
{
int ch;
printf("\t\t####### MENU #########\n");
printf("\n\t\t 1----RED");
printf("\n\t\t 2----GREEN");
printf("\n\t\t 3----YELLOW");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:

printf("\nSTOP");
break;

case 2:

printf("\nGO");
break;

case 3:

printf("\nWAIT");
break;
default:
printf("You enter a wrong choice");
break;
}
}
