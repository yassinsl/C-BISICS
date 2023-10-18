#include <stdio.h>
#include <string.h>
/*
Author: YASSIN LAHSSINI
Date: 10/18/2023
Time: 10:15
Program Description:
C program to check whether a string is palindrome or not
*/
int main (void)
{
    char s1[100];
    int end = 0, start = 0,b = 0;
    printf("please enter your name  :");
    scanf("%s",s1);
        printf("this is your name :%s\n",s1);
        end = strlen(s1) - 1;
        for(int i = 0; s1[i]; i++)
        {
            if(s1[start] != s1[end])
            {
                b++;
                break;
            }
            end--;
            start++;
        }
        if (b == 0)
        {
            printf( "%s is Palindrome string\n",s1);
        }
    else
        {
            printf( "%s is not Palindrome string\n",s1);
        }

}