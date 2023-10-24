#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/21/2023
Time: 15:20
C program to calculate the factorial of a number using pointers
*/
int main (void)
{
    int a,i,sum = 1;
    int *p;
    p = &a;

        printf("please enter your namber :");
        scanf("%d",p);
    for(i = *p; i > 0; i--)
    {
        sum = sum  *  i;
    }
    printf("The Factorial of %d is %d\n",*p,sum);
    return (0);
}