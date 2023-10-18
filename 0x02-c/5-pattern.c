#include <stdio.h>
/*
author: YASSINE LAHSSINI
date: 10/12/2023
time: 9:20
program: This program prints a square pattern where the center is filled with the value 0 (k),
            and the border is filled with the value 1 (l). The size of the square is determined by the positive number entered by the user, and the center is calculated as (size / 2) + 1.
*/
int main (void)
{
    int i, j, yassin, k, l, n;
     k = 0;
    l = 1;
    printf("please enter positive number : ");
    scanf ("%d", &yassin);
    n= (yassin/2) + 1;
    if (yassin < 0)
    {
        printf("please enter positive number\n");
    }
    else 
    {
        for (i = 1; i <= yassin; i++)
        {
            for (j = 1; j <= yassin ; j++)
            {
                if (i == n && j == n)
                {
                    printf("%d",k);
                }
               else{
                printf("%d",l);
               }
            }
            printf("\n");
        }
    }
    return (0);
}