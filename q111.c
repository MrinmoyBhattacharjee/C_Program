#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char ch[20];
int i,n=0,l=0;
printf("Enter a string=");
gets(ch);
for(i=0;ch[i]!='\0';i++)
{
if(isalpha(ch[i]))
n++;
else if(isdigit(ch[i]))
l++;
}
printf("No of alphabet=%d",n);
printf("\n No of number=%d",l);
getch();
}
