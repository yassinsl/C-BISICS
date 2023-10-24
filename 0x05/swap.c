#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/21/2023
Time: 15:10
C program to swap two numbers using call by reference
*/
int main (void)
{
    int a, b;
    int *p = &a,*q = &b;
    printf("please enterr  number 1 :");
    scanf("%d",p);
    printf("please enterr  number 2 :");
    scanf("%d", q);

    int c = *p;
    *p = *q;
     *q = c;
     printf("Values after swapping:\n");
     printf("num 1 is :%d\n",*p);
     printf("num 2 is :%d\n",*q);

     return (0);
}