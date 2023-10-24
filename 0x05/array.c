#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/21/2023
Time: 15:20
C program to add two numbers using pointers
*/
int main (void)
{
    int i,n;
    int array[20];
    printf("please enterr  number of element :");
    scanf("%d",&n);
    int *ptr = array;
    printf("please enter the element of array :\n");
    for(i = 0 ; i < n; i++)
    { 
        printf("element-%d : ",i);
        scanf("%d",ptr);
        ptr++;
    }
      ptr = array;
    printf(" the element of array :\n");
    for(i = 0 ; i < n; i++)
    { 
       printf("%d",*ptr);
       if (i != n - 1 )
       printf(", ");
       ptr++;
    }
    printf("\n");
    int *ptr2 = array;
       printf(" the element of array 2:\n");
    for(i = 0 ; i < n; i++)
    { 
       printf("%d",*ptr2);
        if (i != n - 1 )
       printf(", ");
       ptr2++;
    }
    printf("\n");
}