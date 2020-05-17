#include<stdio.h>
#include<conio.h>

main()
{
char ch;
printf("\n\nEnter a character= ");
scanf("%c",&ch);

if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
printf("\n\n  %c is a Vowel",ch);
else
printf("\n\n\t%c is Not a vowel",ch);
getch();
}
