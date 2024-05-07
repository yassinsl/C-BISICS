#include <stdio.h>

int main (void)
{
    int matrix[10][10];
    int i,j,sum,rows,colm;
    printf("Please Enter the rows of matrix :");
    scanf("%d",&rows);
    printf("Please Enter the colmns of matrix :");
    scanf("%d",&colm);
    
    for (i=0; i<rows; i++)
    {
        for (j=0; j<colm; j++)
        {
            printf("element[%d][%d] = ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("the element the array 1 are :\n");
    for ( i=0; i<rows; i++)
    {
         printf("\n");
        for ( j=0; j<colm; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
    }
    printf("\n");
   for (i =0; i<rows; i++)
   {
    for (j =0; j<colm; j++)
    {
        if(i + j == (rows + 1)- 2)
        {
            sum = sum + matrix[i][j];
        }
    }
   }
   
   printf("Sum of main diagonal elements = %d\n",sum);

}