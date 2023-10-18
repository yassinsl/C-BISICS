#include <stdio.h>

int main (void)
{
    int matrix[10][10];
    int i,j,rows,colm;
    printf("Please Enter the rows of matrix :");
    scanf("%d",&rows);
    printf("Please Enter the colmns of matrix :");
    scanf("%d",&colm);
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<colm; j++)
        {
            printf("element[%d][%d] = ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int i=0; i<rows; i++)
    {
         printf("\n");
        for (int j=0; j<colm; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
    }
    printf("\n");

}