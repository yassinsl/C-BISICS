#include <stdio.h>
/*
Author: YASSIN LAHSSINI
Date: 10/19/2023
Time: 08:40
Program Description:
C program to remove all repeated characters in a string
*/

int main (void)
{
    char s1[100];
    int i,j,k;           
    char sh;
    printf("please enter your name  :");
        scanf("%s",s1);
    printf("this is your name :%s\n",s1);
 
        for (i = 0; s1[i]; i++)
        {
           for (j = i + 1; s1[j]; j++)
           {
                if(s1[i] == s1[j])
                {
                     for (k = j; s1[k]; k++)
                {
                    s1[k] = s1[k + 1];
                }
                }
           }
        }
          printf("first string is %s\n", s1);
        return (0);
}