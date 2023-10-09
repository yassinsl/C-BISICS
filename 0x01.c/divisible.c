#include <stdio.h>
/*
Author:YASSIN LAHSSINI
Date:10/09/2023
Time: 11:45
Program:  Divisibility Check
*/
int main(void)
{
    int a;

    printf("Enter a number: ");
    if (scanf("%d", &a) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1; 
    }

    if (a % 3 == 0 && a % 13 == 0)
    {
        printf("%d is divisible by both 3 and 13.\n", a);
    }
    else
    {
        printf("%d is not divisible by both 3 and 13.\n", a);
    }

    return 0;
}
