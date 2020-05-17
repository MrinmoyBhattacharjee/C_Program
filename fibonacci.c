#include<stdio.h>
#include<conio.h>
 main()
 {
     int first=0,second=1,k=2,r,third;
      printf("\n\nEnter the number range=");
        scanf("%d",&r);
      printf("\nFIBONACCI SERIES:\n");
     printf(" %d %d",first,second);
      while(k<r)
        {
          third=first+second;
          first=second;
          second=third;
          printf(" %d",third);
          k++;
          }

          getch();
          }
