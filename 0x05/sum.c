#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/21/2023
Time: 15:20
C program to add two matrices using pointers
*/
int main (void)
{
    int matrix[10][10];
    int matrix2[10][10];
    int sum[10][10];
    int row,colmn,i,j,n;
    int *ptr,*ptr1;
    printf("please enter rows of matrix :");
    scanf("%d",&row);
    printf("please enter colmn of matrix :");
    scanf("%d",&colmn);

    ptr =*(matrix);
    printf("enter element  of matrix 1:");
        for(i=0; i < row; i++)
        {
            for(j=0; j < colmn; j++)
            {
                printf("elment[%d][%d] :",i,j);
                scanf("%d",ptr);
                ptr++;
            }

        }
        ptr1 =*(matrix2);
            printf("enter element  of matrix 2:");
        for(i=0; i < row; i++)
        {
            for(j=0; j < colmn; j++)
            {
                printf("elment[%d][%d] :",i,j);
                scanf("%d",ptr1);
                ptr1++;
            }
        }
        printf("\n");
       ptr1 = &matrix2[0][0];
    ptr = &matrix[0][0];
        for(i=0; i < row; i++)
        {
            printf("\n");
            for(j=0; j < colmn; j++)
            {
                sum[i][j] = *ptr + *ptr1;
                ptr++;
                ptr1++;
                printf("%d\t",sum[i][j]);
            }
        }
        printf("\n");
        return (0);
}