#include <stdio.h>
/*
Author: YASSIN LAHSSINI
Date: 10/09/2023
Time: 11:00
Program: Month Days Calculator
*/
int main (void)
{
    int a;
    printf("Enter the month number between (1-12) :");
    scanf ("%d",&a);
    if (a % 2 != 0  && a <= 12)
    {
        printf("31 days\n");
    }
    else if (a == 2)
    {
        printf("28/29 days\n");
    }
    else if (a != 2 && a % 2 == 0 && a <= 12)
    {
        printf("30 days\n");
    }
    else {
        printf("printf number from 1 to 12\n");
    }
}