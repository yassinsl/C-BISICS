#include <stdio.h>
#include <string.h>
/*
Author: YASSIN LAHSSINI
Date: 10/09/2023
Time: 8:20
Program Description:
This C program prompts the user to enter their name (up to 99 characters) and a character they want to search for. 
    It then counts and displays the total occurrences of the specified character within the input name. 
    The program is designed to handle long names and efficiently counts occurrences. 
    It provides the user with valuable information about the input string.
*/

int main (void)
{
    char s1[100];
    int i,b = 0;
    char sh;
    printf("please enter your name  :");
        scanf("%s",s1);
    printf("this is your name :%s\n",s1);
  while (getchar() != '\n');
    printf("please enter the character to search : ");
        scanf("%c",&sh);

        for (i = 0; s1[i]; i++)
        {
            if(s1[i] == sh)
            {
               b++;
            }
        }
        printf("Total occurrences of '%c' : %d\n",sh,b);
        return (0);
}