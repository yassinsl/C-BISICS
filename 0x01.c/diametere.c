#include <stdio.h>
#define PI 3.14
/*
Author:YASSIN LAHSSINI
Date:10/09/2023
Time: 13:00
Program:Calculate the Area of a Circle
*/
int main (void)
{
int a;
float area;
printf ("Enter the diameter of the circle :");
scanf("%d",&a);
 if (a < 0)
printf("please send a positive number \n");
else if (a >= 0)
{
area = (PI/4) * a * a;
printf ("area the circle is %.2f\n", area);
}
return (0);
}