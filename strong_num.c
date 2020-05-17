 #include<stdio.h>
 #include<conio.h>

 main()
 {
    int num,i,f,r,sum=0,temp;

  printf("Enter a number: ");
  scanf("%d",&num);
 
  temp=num;
  while(num>0)
    {
      i=1;
      f=1;
      r=num%10;

      while(i<=r)
      {
         f=f*i;
        i++;
      }
      sum=sum+f;
      num=num/10;
    }
  if(sum==temp)
      printf("\n%d is a Strong number",temp);
  else
      printf("\n%d is not a Strong number",temp);

  getch();
}