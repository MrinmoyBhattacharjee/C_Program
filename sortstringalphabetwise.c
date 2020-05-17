#include <stdio.h>
#include <conio.h>
#include <string.h>
    void main()
    {
        char s[40],t;
        int i,j;
        clrscr();
        printf("\n Enter the String :- ");
        scanf("%s",s);
        for(i=0;s[i]!='\0';i++)
         {
            for(j=i+1;s[j]!='\0';j++)
              {
                if(s[i]>s[j])
                {
                    t=s[i];
                    s[i]=s[j];
                    s[j]=t;
                }
              }
          }
        printf("the Alphabet wise is :- %s",s);
        getch();
    }