#include <stdio.h>

int main (void)
{
     int matrix[10][10],mularr[10][10];
    int b,i,j,rows,colm;
    printf("Please Enter the rows of matrix :");
    scanf("%d",&rows);
    printf("Please Enter the colmns of matrix :");
    scanf("%d",&colm);
    for(i =0; i < rows; i++)
    {
        for(j = 0; j <colm; j++)
        {
            printf("a[%d,%d] :",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("the elements of the matrix are :\n");
    for(i =0; i < rows; i++)
    {
        printf("\n");
        for(j = 0; j <colm; j++)
        {
            printf("%d\t",matrix[i][j]);

        }
    }
    printf("\n");

    printf("Please enter the number of  multiplier :");
    scanf("%d",&b);
    printf("the first array is :\n");
    for(i =0; i < rows; i++)
    {
        printf("\n");
        for(j = 0; j <colm; j++)
        {
            mularr[i][j] = b * matrix[i][j];
            printf("%d\t", mularr[i][j]);
        }
    }
    printf("\n");
    return(0);
}