#include <stdio.h>
/*
Author:  MR YASSINE LAHSSINI
Date: 10/23/2023
Time: 01:15
C program to search element in array using pointers
*/
int main (void)

{
    int a[100], n, i, element,b = 0;
    int *ptr;
    printf("Please enter number of elements (0 to n):");
    scanf("%d",&n);
ptr = &a[0];

        for (i = 0; i < n; i++)
        {
            printf("element-%d",i);
            scanf("%d",ptr);
            ptr++;
        }
        ptr = a;
        printf("element of array are :");
        for (i = 0; i < n; i++)
        {
            printf(" %d ", *ptr);
            ptr++;
        }
       printf("\n");
       printf("please enter  the element to search :");
       scanf("%d",&element);

         ptr = a;

       for (i = 0; i < n; i++)
        {
           if (*ptr == element)
        {
            b++;
        }
         ptr++;
        }
        if(b != 0)
        printf("this element  %d do exists in array\n",element );
    else
    printf("this element  %d does not exists in array\n",element );
return (0);
}