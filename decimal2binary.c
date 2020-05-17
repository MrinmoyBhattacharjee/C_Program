 //decimal to binary
 #include<stdio.h>
  #include<conio.h>

main()
  {

    long int dno,num;
          int bno[100],i=0,n;

     printf("Enter any decimal number: ");
           scanf("%ld",&dno);
           num= dno;

        while(num >0)
        {

         bno[i++]= num % 2;
         num= num / 2;

        }


    printf("Equivalent binary value of decimal number %d: ",dno);

    for(n= i -1 ;n>= 0;n--)

         printf("%d",bno[n]);

getch();

}