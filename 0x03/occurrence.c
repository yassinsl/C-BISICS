#include <stdio.h>
/*
Author: YASSIN LAHSSINI
Date: 10/19/2023
Time: 3:10
Program Description:
C program to replace first occurrence of a character in a string
*/
int main (void)
{
    char str[11];
    int i,j;
    char sh, ch;

        printf("please enter your name : ");
        scanf("%s",str);
        printf(" your name is :%s\n",str);

        while(getchar() != '\n');

        printf("character to replace :");
        scanf("%c",&sh);

          while(getchar() != '\n');

        printf("character to replace with:");
        scanf("%c",&ch);
        for(i = 0; str[i]; i++)
        {
            if(str[i] == sh)
            {
                char c = sh;
                str[i] = ch;
            }
        }
        printf("String after replacing '%c' with '%c' : %s\n",sh,ch,str);

return (0);
        
}