#include <stdio.h>
/*
author :YASSINE LAHSSINI
date : 10/05/2023
time : 10:01
program : to check whether a given number is even or odd
*/
int main (void)
{
    int num;
    printf ("Enter the number : ");
    scanf ("%d", &num);
    if (num % 2 == 0)
    printf("%d  is an even integer\n",num);
    else if (num % 2 != 0)
    printf("%d  is an odd integer\n",num);
return (0);
}