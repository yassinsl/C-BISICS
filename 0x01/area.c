#include <stdio.h>
#include <math.h>
#define PI 3.14
/*
Author:YASSIN LAHSSINI
Date:10/09/2023
Time: 14:00
Program: Calculate the Area of a Triangle Using Heron's Formula
*/
int main (void)
{
    int a,b,c,p;
    float area;

    printf("enter a and b, c  :");
    scanf("%d""%d""%d",&a,&b,&c);
    if (a < 0 && b < 0)
    printf("enter positive numbers\n");
else 
{
    p =(a + b + c)/2;
    area =PI * pow((a * b * c)/(4 + sqrt(p*(p - a) * (p - c) * (p - b))),2);
    printf ("erea is %.2f\n",area);
}
    return (0);
}