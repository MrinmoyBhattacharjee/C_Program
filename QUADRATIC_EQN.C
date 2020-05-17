#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
  float a,b,c;
  float d,root1,root2;


  printf("\n\nEnter a, b and c of quadratic equation: ");
  scanf("%f%f%f",&a,&b,&c);

  d = b * b - 4 * a * c;

  if(d < 0){
    printf("\n\nRoots are complex number.\n");

    printf("\nRoots of quadratic equation are: ");
    printf("\nRoot 1=%.3f+%.3fi",-b/(2*a),sqrt(-d)/(2*a));
    printf(",Root2= %.3f%+.3fi",-b/(2*a),-sqrt(-d)/(2*a));


  }
  else if(d==0){
   printf("\nBoth roots are equal.\n");

   root1 = -b /(2* a);
   printf("\nRoot of quadratic equation is: %.3f ",root1);


  }
  else
{
   printf("Roots are real numbers.\n");

   root1 = ( -b + sqrt(d)) / (2* a);
   root2 = ( -b - sqrt(d)) / (2* a);
   printf("Roots of quadratic equation are: %.3f , %.3f",root1,root2);
  }

  getch();
}
