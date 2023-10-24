#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/24/2023
Time: 08:30
C program to input and display a matrix using pointers
*/
int main (void)
{
    int matrix[10][10];
    int row,colmn,i,j,n;
    int *ptr;
    printf("please enter rows of matrix :");
    scanf("%d",&row);
    printf("please enter colmn of matrix :");
    scanf("%d",&colmn);

    ptr =*(matrix);
        for(i=0; i < row; i++)
        {
            for(j=0; j < colmn; j++)
            {
                printf("elment[%d][%d] :",i,j);
                scanf("%d",ptr);
                ptr++;
            }

        }
        ptr =*(matrix);
        for(i=0; i < row; i++)
        {
            printf("\n");
            for(j=0; j < colmn; j++)
            {
                printf("%d\t",*ptr);
                ptr++;
            }
        }
        printf("\n");
        return (0);
}