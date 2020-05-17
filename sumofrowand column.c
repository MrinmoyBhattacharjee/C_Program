/**
 * C program to find sum of elements of rows and columns of matrix
 */

#include <stdio.h>
#include<conio.h>
#define row 10
#define col 10


void summatrix(int a[row][col],int,int); //function definition
 main()
{
    int a[10][10];
    int r,c,i,j;
    printf("\nEnter no. of rows and columns of a matrix: ");
    scanf("%d %d", &r, &c);

    /*
     * Reads elements in matrix from user
     */
    printf("Enter elements in matrix of size %dx%d: \n",r,c);
    for(i=0; i<r; i++)

        for(j=0; j<c; j++)

            scanf("%d", &a[i][j]);

          for(i=0; i<r; i++)
           {
        for(j=0; j<c; j++)

            printf(" %d", a[i][j]);
            printf("\n");
            }
            summatrix(a,r,c);
           getch();
           }

            void summatrix(int a[row][col],int r,int c)
            {
            int sum,i,j;
    /*
     * Finds the sum of elements of each row of matrix
     */
    for(i=0; i<r; i++)
    {
        sum = 0;
        for(j=0; j<c; j++)
        {
            sum += a[i][j];
        }

        printf("Sum of elements of Row %d = %d\n", i+1, sum);
    }

    /*
     * Finds the sum of elements of each columns of matrix
     */
    for(i=0; i<r; i++)
    {
        sum = 0;
        for(j=0; j<c; j++)
        {
            sum += a[j][i];
        }

        printf("Sum of elements of Column %d = %d\n", i+1, sum);
    }


}