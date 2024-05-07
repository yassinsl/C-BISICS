#include <stdio.h>
/**
author: YASSINE LAHSSINI
date: 10/12/2023
time: 09:10
program: This program prints a square pattern where the border is filled with the value 1 (c), 
        and the interior is filled with the value 0 (d). The size of the square is determined by the positive number entered by the user.
*/
int main (void)
{
    int a, b, c, d, yassin;
    c = 1;
    d = 0;
    printf ("please enter positive number :");
    scanf ("%d", &yassin);
    if (yassin <0)
    {
        printf("please enter positive number\n");
    }
    else
    {
        for (a = 1; a <= yassin;  a++)
        {
            for (b =1 ; b <= yassin ; b++)
            {
                if (a == 1 || a == yassin || b ==1 || b == yassin)
                {
                    printf("%d",c);
                }
                else 
                {
                    printf("%d",d);
                }
            }
            printf("\n");
        }
    }
    return (0);
}