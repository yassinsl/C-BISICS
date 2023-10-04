#include <stdio.h>
/*
author :YASSINE LAHSSINI
date : 10/04/2023
time : 10:33
program : Calculate Area of a Circle
*/
#define PI 3.14159
int main (void)
{
    int radius;
    printf ("Enter the radius of the cercle :");
    scanf ("%d",&radius);
    if (radius < 0)
    printf("Space does not accept negative numbers\n");
   else 
   {
     int i;
    i = (float)(radius*radius);
    printf ("the area of the cercle with radius %d is approximately: %.2f\n", radius,i*PI);
   }
}