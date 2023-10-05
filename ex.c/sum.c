#include <stdio.h>
/*
author :YASSINE LAHSSINI
date : 10/04/2023
time : 12:52
program :  the sum of the first 10 natural numbers.
*/
int main (void)
{
    int n, i;
     int sum=0;
    printf("Enter the number from 1 : ");
    scanf("%d", &n);
    if (n < 1)
    printf("Please print number from 1\n");
    else 
    {
        for (i = 1 ; i<=n ; i++)
        {
          sum +=i;
        }
       printf ("The Sum is :%d",sum);
        printf("\n");
    }
}