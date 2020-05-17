#include<iostream.h>
#include<conio.h>
 class employee
 {
int age,salary,c1,c2;
char name[60] ;
 char sex;

public :
void enter( )
{
cout<<"\n Enter  name =";
cin>>name;
 cout<<"\n Enter  age =";
cin>>age;
cout<<"\n Enter salary =";
cin>>salary;
cout<<"\n Enter  Sex =";
cin>>sex;
}
void display( )
{

cout<<name<<" "<<age<<" "<<salary<<" "<<sex;
}
char noofmalefemale( )
{
   return sex;

}
 int salarycal( )
{
   return salary;

}

int agecal( )
{
   return age;

}
} ;

void main()
{
  int i,n=0,m=0,a=0;
  float avg,tot;
  employee e[100];
  cout<<"\n Enter 10 records=\n" ;
  for(i=0;i<2;i++)
     e[i].enter();
   cout<<"information of employees are\n";
   for(i=0;i<2;i++)
     e[i].display();

            for(i=0;i<2;i++)
     if(e[i].noofmalefemale()=='m')
     n=n+1;
     else if(e[i].noofmalefemale()=='f')
     m=m+1;
     cout<<"\nno of male employee=\n"<<n;
     cout<<"\nno of female employee=\n"<<m;
     for(i=0;i<2;i++)
      if( e[i].agecal()>45)
      a++;
       cout<<"\nNo of employee age more than 45=\n"<<a;
     for(i=0;i<2;i++)
      tot=tot+e[i].salarycal();
      avg=tot/2;
       cout<<"\nAverage Salary=\n"<<avg;
getch();
}


