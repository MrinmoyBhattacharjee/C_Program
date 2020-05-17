//binary to decimal


 #include<stdio.h>
 #include<conio.h>
 #include<math.h>

 main()
  {

    long int bno,dno=0,j=0,r;

    printf("Enter any number any binary number: ");
    scanf("%ld",&bno);

    while(bno>0)
      {
         r=bno%10;
        dno=dno+r*pow(2,j);
        bno=bno/10;
        j++;
      }

    printf("Equivalent decimal value: %ld",dno);

    getch();
}