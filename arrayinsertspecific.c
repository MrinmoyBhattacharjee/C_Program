#include<stdio.h>
#include<conio.h>
 main() {
   int arr[30], element, num, i, location;
 
      printf("\nEnter no of elements :");
   scanf("%d", &num);
      printf("\n Elements of array are=\n");
   for (i = 0; i < num; i++)
          scanf("%d", &arr[i]);
       printf("\nEnter the element to be inserted :");
   scanf("%d", &element);
       printf("\nEnter the location= ");
   scanf("%d", &location);

       for (i = num; i >= location; i--)

      arr[i] = arr[i - 1];

   num++;
   arr[location - 1] = element;
   printf("\n Array after inserting an element are=\n");
      for (i = 0; i < num; i++)
      printf(" %d", arr[i]);
 
   getch();
}