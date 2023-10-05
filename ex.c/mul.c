#include <stdio.h>
/*
author :YASSINE LAHSSINI
date : 10/05/2023
time : 12.15
program :  print multiplication table of a given number
*/
int main (void)
{
    int a,b,mul;

    printf("enter number from 0 :");
    scanf ("%d",&a);
    if (a < 0)
    printf("please enter number from 0\n ");
    else 
    {
        for (b = 0 ; b <= 10 ; b++)
        {
            mul = a*b;
            printf("%d * %d = %d\n",a,b,mul);
        }
        printf("\n");
    }
    return (0);
}