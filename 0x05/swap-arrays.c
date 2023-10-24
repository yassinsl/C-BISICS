#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/21/2023
Time: 15:10
C program to swap two arrays using call by reference
*/
int main(void)
{
    int array1[100],array2[100],n, i;
    printf("please enter  number of element :");
    scanf("%d",&n);
    printf("please enter   element of array 1 \n");
    for (i=0; i < n; i++)
    {
        printf("element-%d :",i);
        scanf("%d",&array1[i]);
    }
    printf("please enter   element of array 2 :\n");
    for (i=0; i < n; i++)
    {
        printf("element-%d: ",i);
        scanf("%d",&array2[i]);
    }
    for (i = 0; i < n; i++)
    {
        int *ptr;
        ptr = array1;
        array1[i] = array2[i];
        ptr = array2;
    }


    printf("First array after swapping: \n");
    for (i=0; i < n; i++)
    {
        printf("%d",array1[i]);
        if (i != n - 1)
        printf(", ");
    }
    printf("\n");
    printf("Second array after swapping:  : \n");
    for (i=0; i < n; i++)
    {
        printf("%d",array1[i]);
         if (i != n - 1)
        printf(", ");
    }
    printf("\n");
    return (0);
}