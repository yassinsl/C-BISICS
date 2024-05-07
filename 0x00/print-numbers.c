#include <stdio.h>
/*
author :YASSINE LAHSSINI
date : 10/05/2023
time : 12.15
program : print all natural numbers from 1 to n
*/
int main (void)
{
    int i, n ;
    printf("Enter the number from 1 : ");
    scanf ("%d", &n);
    if (n < 1)
    printf("print number from 1 please\n");
    else {
    for (i = 1; i <= n ; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    }
    return (0);
}