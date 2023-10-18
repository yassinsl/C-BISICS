#include <stdio.h>
#include <string.h>
/*
Author: YASSIN LAHSSINI
Date: 10/18/2023
Time: 08:40
Program Description:
This C program prompts the user to enter their name (up to 99 characters) and a character they want to search for within the name. 
    It efficiently identifies and displays the first occurrence of the specified character in the input name, along with its index. 
    If the character is not found, it informs the user accordingly. 
    The program is designed to handle long names and provides valuable information about the input string.
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

        for (i = 0; s1[i]; i++)
        {
            if(s1[i] == sh)
            {
                printf("%c is found at index %d\n",sh,i);
                break;
            }
        }
        return (0);
}