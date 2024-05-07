#include <stdio.h>
/**
Author: YASSINE LAHSSINI
Date: 10/12/2023
Time: 08:10
This C program is designed to take a single positive integer input from the user 
    and then print a square pattern of numbers on the screen
*/
int main (void)
{
    int number, i, j, num;
    num = 1;
    printf("please enter number positive : ");
    scanf ("%d",&number);
    if (number < 0)
    {
        printf("please enter number positive\n");
    }
    else 
    {
        for (i = 1; i <= number; i++)
        {
            for(j = 1; j <= number; j++)
            {
                printf("%d",num);
            }
            printf("\n");
        }
    }
return (0);
}