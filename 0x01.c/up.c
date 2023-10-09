#include <stdio.h>
/*
Author: YASSIN LAHSSINI
Date: 10/09/2023
Time: 16:00
Program: Alphabet Classification
*/
int main (void)
{
    char a;

    printf ("enter the alphabet :");
    scanf ("%c", &a);
    if (a >= 'a' && a <= 'z')
        printf("%c isLowercase alphabet\n",a);
    else if (a >= 'A' && a <='Z')
        printf("%c is uppercase alphabet\n",a);
    else 
        printf("this is not alphabet \n");
return (0);
}