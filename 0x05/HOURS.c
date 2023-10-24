#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/21/2023
Time: 09:30
C program to convert hours to weeks and days
*/
int main (void)
{
 int hours;
 float days, weeks;
    
    printf("please enter  number of hours :");
    scanf("%d", &hours);

    weeks = (float)(hours)/ (7 * 24);
    days = (float)(hours) / 24;

    printf("hours :%d\n", hours);
    printf("weeks :%.2f\n", weeks);
    printf("days :%.2f\n", days);

return (0);
}