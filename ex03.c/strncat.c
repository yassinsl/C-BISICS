#include <stdio.h>
char *_strcat(char *dest, char *src);
/*
Author: YASSIN LAHSSINI
Date: 10/18/2023
Time: 11:30
Program Description:
C program to compare two strings
*/
int main (void)
{
    char s1[8]= "yassin";
    char s2[5] = "slawi";
printf("%s\n",_strcat(s1,s2));
}
char *_strcat(char *dest, char *src)
{
    int i,j;
    for (i =0 ; dest[i]!= '\0';)
    {
    i++;
    }
    for (j=0 ;s[j] != '\0' && j< n;j++)
    {
        dest[i] = src[j];
        i++;
    }
    dest[i] = '\0';
    
    return (dest);
}