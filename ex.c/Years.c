#include <stdio.h>/*
author :YASSINE LAHSSINI
date : 10/04/2023
time : 12:00
program :Days to Years, Weeks, and Days Converter
*/

int main (void)
{
    int days;
   printf("Enter Number of days : ");
   scanf("%d", &days);
   printf("years :%d\n", days/360);
   printf("weeks :%d\n", days/7);
   if(days % 360 != 0)
   {
    printf("days = %d\n",days % 360 );
   }
}