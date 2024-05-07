#include <stdio.h>
#include <string.h>
/*
Author: YASSINE LAHSSINI
Date: 10/04/2023
Time: 12:33
Program: Reverse Your Name
*/
int main (void)
{
    char rev[12];
    int i;
     printf("reverse your name :");
     scanf ("%s",rev);
    int len;
    len = strlen(rev);
    for (i = len-1; rev[i] ;i--)
    {
  printf("%c",rev[i]);
    }
    printf("\n");



}