#include <stdio.h>
/*
author: YASSINE LAHSSINI
date: 10/12/2023
time: 8:50
program: This program prints a square pattern with alternating 1s and 0s based on the user's input. 
        The size of the square is determined by the positive number entered by the user. Each row alternates between 1 and 0 in this pattern.
*/
int main (void)
{
    int yassin ,i,j,k,l;
    k =0;
    l = 1;
    printf("please enter positive number : ");
    scanf ("%d", &yassin);
    if (yassin < 0)
    {
        printf("please enter positive number\n");
    }
    else 
    {
        for (i = 1 ; i <= yassin ; i++)
        {
            for (j = 1; j <= yassin ; j++)
            {
                if (j % 2 == 0)
                {
                    printf("%d", l);
                }
                else 
                {
                    printf("%d",k);
                }
            }
             printf("\n");
        }
    }
return (0);
}