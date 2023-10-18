#include <stdio.h>
/*
author: YASSINE LAHSSINI
date: 10/12/2023
time: 11:15
program: This program calculates the grade based on the average marks of five subjects (Physics). It displays both the percentage and the corresponding grade (A, B, C, D, E, or F).
*/
int main (void)
{
    int i, j, k, l,n;
    float porcentage = 0;

    printf ("enter marks of five subjects Physics :");
    scanf("%d""%d""%d""%d" "%d", &i,&j,&k,&l,&n);
    porcentage = (float)((i+j+k+l+n))/ 5;
    if (porcentage >= 90)
    {
        printf ("marks of five subjects : %.2f\n", porcentage);
        printf("Grade A\n");
    }
   else if (porcentage >= 80 && porcentage  < 90)
    {
        printf ("marks of five subjects : %.2f\n", porcentage);
        printf("Grade B\n");
    }
   else if (porcentage >= 70 && porcentage < 80)
    {
        printf ("marks of five subjects : %.2f\n", porcentage);
        printf("Grade C\n");
    }
   else if (porcentage <= 60 && porcentage < 70)
    {
        printf ("marks of five subjects : %.2f\n", porcentage);
        printf("Grade D\n");
    }
   else if (porcentage <= 40 && porcentage <60)
    {
        printf ("marks of five subjects : %.2f\n", porcentage);
        printf("Grade E\n");
    }
    else if (porcentage < 40)
    {
        printf ("marks of five subjects : %.2f\n", porcentage);
        printf("Grade F\n");
    }
    return (0);
}