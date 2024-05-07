#include <stdio.h>
/*
author: YASSINE LAHSSINI
date: 10/11/2023
time: 08:15
program: This program determines the day of the week based on the user's input of a number from 1 to 7.
        It uses a switch statement to match the input to the corresponding day and prints the result.
*/
int main (void)
{
    int a;
    printf ("Enter week number(1-7) :");
    scanf ("%d", &a);
   
        switch (a)
        {
            case 1 :
            printf("Monday\n");
            break;
            case 2 :
            printf("Tuesday\n");
            break;
            case 3 :
            printf("Wednesday\n");
            break;
            case 4 :
            printf("Thursday\n");
            break;
            case 5 :
            printf("Friday\n");
            break;
            case 6 :
            printf("Saturday\n");
            break;
            case 7 :
            printf("Sunday\n");
            break;
            default :
            printf("please enter number from 1 to 7 \n");
        }
    return (0);
}