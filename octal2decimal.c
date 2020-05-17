#include<stdio.h>
 #include<conio.h>
 #include<math.h>

 main()
  {

    long int no,dno=0,j=0,r;
       printf("Enter  any Octal Number: ");
     scanf("%ld",&no);
      while(no >0)
      {
         r=no%10;
        dno=dno+r*pow(8,j);
        no=no/10;
        j++;
      }

     printf("Equivalent decimal value: %ld",dno);
    getch();
}