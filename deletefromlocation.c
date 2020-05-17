#include<stdio.h>
#include<conio.h>
 main() {
   int arr[30], num, i, loc;

   printf("\nEnter no of elements :");
   scanf("%d", &num);


   printf("\nEnter %d elements :", num);
   for (i = 0; i < num; i++)

      scanf("%d", &arr[i]);
   printf("\n Elements of array are=\n");
   for(i=0;i<num;i++)
     printf(" %d",arr[i]);


   printf("\n location of the element to be deleted :");
   scanf("%d", &loc);


   while (loc < num) {
		arr[loc - 1] = arr[loc];
      loc++;
   }
	num--;

  printf("\n Elements of array after deletion=\n");
   for (i = 0; i < num; i++)
      printf(" %d", arr[i]);

 getch();
}