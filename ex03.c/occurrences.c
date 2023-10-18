#include <stdio.h>
#include <string.h>
/*
Author: YASSIN LAHSSINI
Date: 10/18/2023
Time: 10:00
Program Description:
C program to find the first occurrence of a character in a string
*/
int main (void)
{
    char s1[100];
    int i;
    char sh;
    printf("please enter your name  :");
        scanf("%s",s1);
    printf("this is your name :%s\n",s1);
  while (getchar() != '\n');
    printf("please enter the character to search : ");
        scanf("%c",&sh);
    printf("%c is found at index :",sh);
        for (i = 0; s1[i]; i++)
        {
            if(s1[i] == sh)
            {
                printf("%d ",i);
            }
        }
        printf("\n");
        return (0);
}