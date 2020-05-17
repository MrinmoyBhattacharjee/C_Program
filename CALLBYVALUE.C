
#include<stdio.h>
#include<conio.h>
void func(int a,int b); //WITH ARGUMENT NO RETURN METHOD
main()
  {
   int x=5,y=7;
  printf("\nBefore Function call,x=%d,y=%d",x,y);
  func(x,y);     //function call
  printf("\nAfter Function call,x=%d,y=%d",x,y);
  getch();
  }
  void func(int a,int b)   //function definition
   {
  a++;
   b++;
   printf("\nIn Function,x=%d,y=%d",a,b);
   }
