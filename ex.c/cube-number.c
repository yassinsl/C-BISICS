#include <stdio.h>
#include <math.h>
/*
author :YASSINE LAHSSINI
date : 10/04/2023
time : 12:52
program :  the cube of the number
*/
int main (void)
{
    int i, j;
    int sum = 0;
    printf ("Enter the number from 1 :");
    scanf ("%d",&j);
    for (i = 1 ; i<= j ; i++)
    {
        sum += pow(i,i);
        printf ("Number is : %d and cube of the %d is :%d\n",i,i,sum);
    }
    return 0;
}