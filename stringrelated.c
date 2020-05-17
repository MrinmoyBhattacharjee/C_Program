#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>


main()
{

char s[100];
int i,l;
printf("Enter a string=");
gets(s);
  l=strlen(s);
  printf("\Length of the String=%d",l);
for(i=0;s[i]!='\0';i++)

if(isupper(s[i]) )
printf("\n %c in uppercase",s[i]);

  else if(islower(s[i]) )
printf("\n %c in lowercase",s[i]);

   else if(isalnum(s[i]) )
printf("\n %c in numeric",s[i]);

else
printf("\n %c in special character",s[i]);




getch();
}
