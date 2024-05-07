#include <stdio.h>
/*
author: YASSINE LAHSSINI
date: 10/05/2023
time: 12:15
program: This program prints a pattern of numbers in a triangular shape. 
        The size of the triangle is determined by the positive number entered by the user.
*/
int main (void)
{
    int a,b,c;
    printf("Please enter positive number:");
    scanf("%d",&c);
    if (c < 0)
    {
        printf("please enter positive number : /n");
    }
    else {
      
       for (a = 1 ; a <= c; a++)
       {
        for (b = 1  ; b <= c-a+1 ; b++)
        {
            printf("%d",b);
        }
          printf("\n");
       }
   
    }
}