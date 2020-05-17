 #include<stdio.h>
 #include<conio.h>
 main()
  {
  int num,i,f,r,sum,temp,max;

  printf("Enter maximum range: ");
  scanf("%d",&max);
     printf("Strong numbers in given range are: ");
  for(num=1; num <= max; num++){
      temp = num;
      sum=0;

      while(temp>0)
         {
           i=1;
           f=1;
           r=temp%10;

           while(i<=r)
           {
             f=f*i;
             i++;
           }
         sum=sum+f;
         temp=temp/10;
      }

      if(sum==num)
           printf("%d ",num);
  }
  getch();
}