 #include<stdio.h>
 #include<string.h>
 #include<conio.h>
 main()
 {
  char str[20];
  int i;
  printf("Enter any string->");
  gets(str);
  printf("The string is->%s",str);
  for(i=0;i<=strlen(str);i++){
            if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
  }
  printf("\nThe string in Uppercase is->%s",str);
  getch();

}