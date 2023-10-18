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
    for (i=0; i<rows; i++)
    {
        printf("\n");
        for (j=0; j<colm; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
    }
    printf("\n");
    printf("Matrix after interchanging its diagonal:\n");
   
}
