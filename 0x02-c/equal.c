#include <stdio.h>

int main (void)
{
    int matrix[10][10],matrix2[10][10],sumarr[10][10];
    int b,i,j,rows,colm;
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
    for ( i=0; i<rows; i++)
    {
        b = 0;
        for ( j=0; j<colm; j++)
        {
            if(matrix2[i][j] == matrix[i][j])
            {
               b++;
               break;
            }
        }
    }
     if(b != 0)
        {
            printf("the two  matrices are equal\n");
        }
        else
        {
            printf("the two  matrices are not equal\n");
        }

}