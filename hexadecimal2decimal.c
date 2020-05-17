#include <stdio.h>  
#include <math.h>
#include <string.h>
#include <conio.h>


 main()
   {
    long int dno=0;
    char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8','9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hexno[30];
    int i, j, power=0, digit;

    printf("Enter a Hexadecimal Number\n");
    scanf("%s", hexno);

    /* Converting hexadecimal number to decimal number */
    for(i=strlen(hexno)-1; i >= 0; i--)
       {
        /*search currect character in hexDigits array */
        for(j=0; j<16; j++)
          {
            if(hexno[i] == hex[j])
              {
                dno=dno+ j*pow(16, power);
              }
          }
        power++;
       }

    printf("Decimal Number : %ld", dno);

    getch();
    }