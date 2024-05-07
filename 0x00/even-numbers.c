#include <stdio.h>
/*
author :YASSINE LAHSSINI
date : 10/04/2023
time : 12:52
program : the maximum value
*/
int main (void)
{
    int a,b;

    printf("Enter the number from 1 :");
    scanf ("%d",&a);
    if (a < 1)
    {
        printf("Enter number from 1 please\n");
    }
    else 
    {
        for (b = 1; b <= a ; b++)
        {
            if (b % 2 == 0)
            printf("%d ",b);
        }
        printf("\n");
    }
    return (0);
}