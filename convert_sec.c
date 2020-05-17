#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int sec,min,hr;
printf("\nEnter Second= ");
scanf("%d",&sec);
hr=sec/3600;
sec=sec%3600;
min=sec/60;
sec=sec%60;


printf("\n\nHour=%d,Minutes=%d,Second=%d",hr,min,sec);
getch();
}