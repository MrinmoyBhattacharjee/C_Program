//decimal to hexadecimal

 #include<stdio.h>
 #include<conio.h>
  main()
    {
    long int dno,r,num;
    int i=0,n,t;
    char hexano[100];

    printf("\nEnter any decimal number:= ");
    scanf("%ld",&dno);
    num = dno;

    while(num >0)
     {
         t = num %16;

      if( t < 10)
           t =t +48;
      else
         t= t+55;

      hexano[i++]= t;
      num =num/16;
    }

    printf("\nEquivalent hexadecimal value of decimal number %d: ",dno);
    for(n= i -1 ;n >= 0;n--)
      printf("%c",hexano[n]);

    getch();
}