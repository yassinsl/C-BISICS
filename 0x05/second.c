#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/21/2023
Time: 15:20
C program to convert seconds into weeks, days, hours, and minutes
*/

int main (void)
{
 float sec;
 int hours, minutes;
 int  days, weeks;
    
    printf("please enter  number of second :");
    scanf("%f", &sec);

    minutes = sec / 60;
    hours =minutes / 60;
    days = hours / 24;
    weeks =  days / 7;

    minutes %= 60;
  
    hours %= 24;
  
    days %= 7;
  printf("%d : %d : %d : %d \n",weeks,days,hours,minutes);

return (0);
}