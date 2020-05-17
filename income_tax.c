#include<stdio.h>
#include<conio.h>

main()
{
int age;
float s,tax;
printf("\n\n Enter your age:=");
scanf("%d",&age);
printf("\n\n Enter your salary:=");
scanf("%f",&s);
if(age<60)
{
  if(s>=0 && s<200000)
  tax=0;
  else if(s>200000 && s<=500000)
  tax=0.1*(s-200000);
 else if(s>500000 &&s<=1000000)
  tax=30000+0.2*(s-500000);
  else if(s>1000000)
  tax=130000+0.3*(s-1000000);
  }

 else if(age>=60)
{
  if(s>=0 && s<250000)
  tax=0;
  else if(s>250000 && s<=500000)
  tax=0.1*(s-250000);
 else if(s>500000 && s<=1000000)
  tax=25000+0.2*(s-500000);
  else if(s>1000000)
  tax=125000+0.3*(s-1000000);
  }
  printf("\n\nTotal tax=%f",tax);
  getch();
  }
