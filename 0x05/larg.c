#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/24/2023
Time: 10:13
C program to find the largest element in an array using pointers
*/
int main (void)
{
    int a[10],n,i;
    int *p;
    p = a;
    printf("please enter a number of elements :");
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        printf("element-%d : ", i);
        scanf("%d",p);
        p++;
    }
      p = a;
      int *max = &a[0];
    for(i = 0; i < n; i++)
    {
        if(*p > *max)
        *max++;
        p++;
    }
    printf(" The Largest element is %d\n",*max);
    return (0);
}