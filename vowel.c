#include<stdio.h>
#include<conio.h>
main()
{

char ch;
printf("\n\nEnter a character:=");
scanf("%c",&ch);
switch(ch)
{
case 'a':    case 'A':
case 'e':     case 'E':
case 'i':     case 'I':
case 'o':     case 'O':
case 'u':     case 'U':
printf("\n\n%c Is  a Vowel",ch);
break;
default:
printf("\n\n%c Is not a Vowel",ch);
}
getch();
}