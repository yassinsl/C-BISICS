#include <stdio.h>
/*
author :YASSINE LAHSSINI
date : 10/04/2023
time : 11:00
program : The program calculates the average of the three exam points
*/
int main (void)
{
    int a,b,c;
    printf ("Enter Exam points : ");
    scanf("%d""%d""%d",&a,&b,&c);
        int sum = (a+b+c) / 3;
        if (sum < 50)
        printf ("FAIL\n");
    else 
    printf ("PASS\n");
return (0);


}