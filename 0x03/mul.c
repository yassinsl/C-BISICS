#include <stdio.h>
/*
Author: YASSIN LAHSSINI
Date: 10/17/2023
Time: 21:00
Program Description:
This C program enables the user to input the dimensions and elements of two matrices. 
It then performs matrix addition on the two matrices and displays the result. 
The program efficiently handles matrix addition by iterating through the elements of the matrices and calculating the sum of corresponding elements. 
It provides the user with the addition result, making it a useful tool for performing matrix operations.
*/

int main (void)
{
    int matrix[10][10],matrix2[10][10],subarr[10][10],c[10][10];
    int i,j,rows,colm,sum;
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
            sum = 0;
           for(int k = 0; k < colm; k++)
           {
            sum = sum + matrix[k][j] * matrix2[i][k];
           }
           c[i][j] = sum;
           printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}