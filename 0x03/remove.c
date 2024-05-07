#include <stdio.h>
/*
Author: YASSIN LAHSSINI
Date: 10/18/2023
Time: 08:40
Program Description:

*/

int main (void)
{
    char s1[100];
    int i,j;
    char sh;
    printf("please enter your name  :");
        scanf("%s",s1);
    printf("this is your name :%s\n",s1);
  while (getchar() != '\n');
    printf("please enter the character to remove : ");
        scanf("%c",&sh);

        for (i = 0; s1[i]; i++)
        {
            if(s1[i] == sh)
            {
                for (j = i; s1[j]; j++)
            {
                s1[j] = s1[j + 1];
            }
            i--;
            }
          
        }
          printf("first string is %s\n", s1);
        return (0);
}