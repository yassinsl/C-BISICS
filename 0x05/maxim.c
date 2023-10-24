#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/24/2023
Time: 15:20
C program to find the maximum of two numbers using pointers
*/

int main (void)
{
    int a, b;
    int *q,*p;
    q = &a;
    p = &b;
    printf("please enter number 1 :");
    scanf("%d", q);
    printf("please enter number 2 :");
    scanf("%d", p);
    if (*p > *q)
    {
        printf(" %d is the maximum number\n", *p);
    }
    else if (*q > *p)
    {
        printf(" %d is the maximum number\n", *q);
    }
    else if (*q == *p)
    {
        printf(" %d and %d are equal !\n", *q,*p);
    }
    return 0;
}