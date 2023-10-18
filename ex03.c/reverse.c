#include <stdio.h>
#include <string.h>
/*
Author: YASSIN LAHSSINI
Date: 10/09/2023
Time: 11:00
Program Description:
C program to find reverse of a string
*/
int main (void)
{
    char s1[100];
    printf("please enter your name  :");
    scanf("%s",s1);
        printf("this is your name :%s\n",s1);
        int len = strlen(s1);
        for (int i = len - 1; i >= 0; i--)
        {
            printf("%c",s1[i]);
        }
        printf("\n");
        return (0);
}