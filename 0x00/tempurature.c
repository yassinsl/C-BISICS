#include <stdio.h>
/*
author :YASSINE LAHSSINI
date : 10/04/2023
time : 11:15
program : Fahrenheit to Celsius Converter
*/
int main (void)
{
    float faherenheit;
    float calsuis;

    printf ("Enter the tempuraturem in faherenheit :");
    scanf("%f",&faherenheit);
        calsuis=(5.0/9.0)*(faherenheit -32);
         printf ("%.2f degrees in faherenheit  is approximately %d degrees calsuis\n",faherenheit,(int)(calsuis));
    rutern (0);
}