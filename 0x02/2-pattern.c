#include <stdio.h>
/*
author: YASSINE LAHSSINI
date: 10/12/2023
time: 8:30
program: This program prints a square pattern of alternating 0s and 1s based on the user's input.
         The size of the square is determined by the positive number entered by the user.
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
                if (i % 2 == 0)
                {
                    printf("%d", k);
                }
                else 
                {
                    printf("%d",l);
                }
            }
             printf("\n");
        }
    }
return (0);
}