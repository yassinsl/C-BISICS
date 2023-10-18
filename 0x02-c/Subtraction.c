#include <stdio.h>

int main (void)
{
    int matrix[10][10],matrix2[10][10],subarr[10][10];
    int i,j,rows,colm;
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
    for ( i=0; i<rows; i++)
    {
        for ( j=0; j<colm; j++)
        {
            printf("element[%d][%d] = ",i,j);
            scanf("%d",&matrix2[i][j]);
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
    printf("the element the array 2 are :\n");
    for (int i=0; i<rows; i++)
    {
         printf("\n");
        for (int j=0; j<colm; j++)
        {
            printf("%d\t",matrix2[i][j]);
        }
    }
    printf("\n");
    printf("The Addition of two matrix is :\n");
    for ( i=0; i<rows; i++)
    {
        printf("\n");
        for ( j=0; j<colm; j++)
        {
            subarr[i][j] = matrix[i][j] - matrix2[i][j];
            printf("%d\t",subarr[i][j]);
        }
    }
    printf("\n");

}