#include<stdio.h>
#include<conio.h>
main()
 {
 char s[50];
 int l,i ;
  printf("\nEnter first string: ");
   gets(s);
  for(i=0;s[i]!='\0';i++)
   l++;
  printf("\nLength of the String is: %d", l);
  getch();
}