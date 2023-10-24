#include <stdio.h>
/*
Author:  MR YASSINE LAHSSINI
Date: 10/23/2023
Time: 01:15
C program to reverse an array using pointers
*/

int main (void)
{
    int a[100],n,i;
    int *ptr;
    printf("Please enter the number of element : ");
    scanf("%d",&n);
 ptr = &a[0];
 for ( i = 0; i < n; i++)
 {
    printf("element[%d] :",i);
    scanf("%d",ptr);
    ptr++;
 }
 ptr = a;
 for ( i = 0; i < n; i++)
 {
    printf("%d ",*ptr);
    ptr++;
 }
 printf("\n");
  ptr =&a[n - 1];
     for ( i = n - 1; i >= 0; i--)
      {
        printf("%d ", *ptr);
        ptr--; 
          }
    printf("\n");
    return (0);
}