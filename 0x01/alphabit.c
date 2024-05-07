#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/09/2023
Time: 10:30
Program: Check if a Character is an Alphabet Letter
*/
int main (void)
{
    char a;

    printf ("Enter character is alphabit : ");
    scanf("%c",&a);
    if (a>= 'a' && a <= 'z'|| a>='A' && a <= 'Z')
        printf("%c is alphabet\n", a);
    else 
        printf ("%c is not a alphabet \n",a);
    return (0);
}