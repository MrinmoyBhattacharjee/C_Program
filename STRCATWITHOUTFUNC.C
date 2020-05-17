#include<stdio.h>
#include<conio.h>

main()
{
char s1[20], s2[20];
int i,l,j;
 printf("\nEnter first string: ");
gets(s1);
printf("\nEnter second string: ");
gets(s2);
for(i=0;s1[i]!='\0';i++)
l++;
for(i=l,j=0;s2[j]!='\0';j++,i++)
s1[i]=s2[j];
s1[i]='\0';
printf("\nThe concatenated string is: %s", s1);
  getch();
}