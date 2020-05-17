#include<stdio.h>
#include<conio.h>


main()
{
int a,b,c;
printf("\n\nEnter Three Numbers= ");
scanf("%d%d%d",&a,&b,&c);

  if(a>b && a>c)
        printf("\n\n%d Is Largest",a);
  else if(b>c)
        printf("\n\n%d Is Largest",b);
  else
         printf("\n\n%d Is Largest",c);
getch();
}