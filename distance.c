#include<iostream.h>
#include<conio.h>
 class Distance
  {
  int feet,inch;
 public:
 Distance()
 {
 feet= 0;inch=0 ;
 }
 Distance(int i, int j)
  {
  feet = i; inch = j;
  }
  Distance(int v)
  {
    feet=v/12;
    inch=v%12;
  }
  void show()
  {
     cout<<"\nFeet="<<feet;
     cout<<"\nInch="<<inch;
  }

  } ;

  main()
  {
  Distance d1;
   Distance d2(2,35);
    Distance d3(40);
    d1.show();
    d2.show();
    d3.show();
    getch();
    }
