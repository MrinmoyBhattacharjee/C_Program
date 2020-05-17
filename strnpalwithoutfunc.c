#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
 {
char s1[50],s2[50];
int i, j, len, flag=0;
  printf("\nEnter any string: ");
  gets(s1);
    strcpy(s2,s1);
    strrev(s2);
 if (strcmp(s1,s2) == 0)
     printf("\nString is palindrome");
 else
     printf("\nString is not palindrome");
  getch();
}