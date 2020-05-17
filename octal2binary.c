 //octal to binary
 #include<stdio.h>
#include<conio.h>
 main()

    {
     char octalno[1000];
    long int i=0;

    printf("Enter any octal number: ");
    scanf("%s",octalno);

    printf("Equivalent binary value: ");
    for(i=0;octalno[i]!='\0';i++)
         {
        switch(octalno[i])
           {
             case '0': printf("000"); break;
             case '1': printf("001"); break;
             case '2': printf("010"); break;
             case '3': printf("011"); break;
             case '4': printf("100"); break;
             case '5': printf("101"); break;
             case '6': printf("110"); break;
             case '7': printf("111"); break;
             default:  printf("\nInvalid octal digit %c ",octalno[i]); return 0;
          }

        }
      getch();
   }