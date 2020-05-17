#include<stdio.h>
#include<string.h>
#include<conio.h>
#
main()
{
 char str[20];
 int i=0, word=0, chr=0;
  printf("\nEnter any string: ");
   gets(str);
 for (i=0;str[i] != '\0';i++)
  {
 if (str[i]== ' ')
  {
  word++;
  chr++;
  }
 else
  chr++;

  }
 printf("\nNumber of characters: %d", chr);
 printf("\nNumber of words: %d", word+1);
  getch();
}