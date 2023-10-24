#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/21/2023
Time: 15:20
C program to add two numbers using pointers
*/
int main (void)
{
    int a, b, c, d, e, f;
    int *p = &a,*q = &b;
    printf("please enterr  number 1 :");
    scanf("%d",p);
    printf("please enterr  number 2 :");
    scanf("%d", q);

    c = *p + *q;
    d = *p - *q;
    e = *p  * *q;
    f = *p  / *q;
 printf("Sum = %d\n",c);
 printf("Difference = %d\n",d);
 printf("proudaction = %d\n",e);
 printf("devision = %d\n",f);
}