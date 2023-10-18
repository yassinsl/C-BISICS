#include <stdio.h>
/*
Author: YASSIN LAHSSINI
Date: 10/17/2023
Time: 11:10
Program Description:
This C program allows the user to input an array's size and its elements. It then identifies and displays any repeating elements within the array. The program efficiently detects and reports duplicate values in the input array, providing the user with valuable information about the data they've entered.
*/

int main (void)
{
    int a[10][10];
    int col,row,i,j,num;

    printf("Enter the number rows of array :");
    scanf("%d",&row);
    printf("Enter the number colmns of array :");
    scanf("%d",&col);

        for(i = 0; i < row; i++)
        {
            for(j = 0; j < col  ; j++)
            {
                printf("elements-%d,%d : ",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        for(i = 0; i < row; i++)
        {
               printf("\n");
            for(j = 0; j < col  ; j++)
            {
                printf("%d\t",a[i][j]);
            }
        }
        printf("\n");
        printf("The given value for searching is:");
        scanf("%d",&num);
        for(i = 0; i < row; i++)
        {
            for(j = 0; j < col  ; j++)
            {
                if(a[i][j] == num)
                printf("The element Found at the position in the matrix is :%d,%d",i,j);
            }
        }
        printf("\n");
        return (0);
}