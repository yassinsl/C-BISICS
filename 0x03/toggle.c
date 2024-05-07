#include <stdio.h>
#include <string.h>
/*
Author: YASSIN LAHSSINI
Date: 10/18/2023
Time: 11:50
Program Description:
C program to toggle case of each character in a string
*/
int main (void)
{
    char s1[10];
    char s2[10];
    printf("please enter your name  :");
    scanf("%s",s1);
        printf("this is your name :%s\n",s1);

        for (int i = 0; s1[i]; i++)
        {
        if(s1[i] >='A' && s1[i] <= 'Z')
        {
            s2[i] = s1[i] + 32;
        }
        else if(s1[i] >= 'a' && s1[i] <= 'z')
        {
            s2[i] = s1[i] - 32;
        }
        }
        printf("this is your Lowercase name :%s\n",s2);
        return (0);
}