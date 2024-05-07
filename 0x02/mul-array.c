#include <stdio.h>

int main (void)
{
    int matrix[10][10],matrix2[10][10],sumarr[10][10];
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
    printf("please enter the element of array 2 : \n");
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
    printf("The multiplication of two matrix is :\n");
    for ( i=0; i<rows; i++)
    {
        printf("\n");
        for ( j=0; j<colm; j++)
        {
            sumarr[i][j] = matrix[i] * matrix2[j][i];
            printf("%d\t",sumarr[i][j]);
        }
    }
    printf("\n");

}