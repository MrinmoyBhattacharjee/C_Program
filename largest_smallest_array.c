 #include<stdio.h>
 #include<conio.h>
 main()

 {
    int arr[50],size,i,lar,small;

     printf("\n\nEnter the size of the array: ");
  scanf("%d",&size);
     printf("\n\nEnter %d elements in to the array: ", size);
  for(i=0;i<size;i++)
      scanf("%d",&arr[i]);

    lar=arr[0];
  for(i=1;i<size;i++)
     {
      if(lar<arr[i])
           lar=arr[i];
     }
     printf("\n\nLargest element of the Array: %d",lar);

   small=arr[0];
  for(i=1;i<size;i++)
     {
      if(small>arr[i])
           small=arr[i];
     }
   printf("\n\nSmallest element of the Array: %d",small);

  getch();
}

