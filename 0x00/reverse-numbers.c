#include <stdio.h>
/*
author :YASSINE LAHSSINI
date : 10/05/2023
time : 12.33
program : print natural numbers in reverse from n to 1
*/
int main (void)
{
    int a,b;
    printf("enter number from 1 : ");
    scanf ("%d",&b);
    if (b < 1)
    printf("print number from 1 please\n");
    else 
    {
        for (a = b ; a >= 1; a--)
        {
            printf("%d ",a);
        }
        printf("\n");
    }
    return(0);
}