#include <stdio.h>
int main (void)
/*
Author: YASSIN LAHSSINI
Date: 10/18/2023
Time: 11:20
Program Description:
C program to compare two strings
*/
{
    char s1[10];
    char s2[10];
    int i, j, k = 0;
    printf("please Enter the names you want to compare : ");
    scanf("%s""%s",s1,s2);

    for (i = 0; s1[i]; i++)
    {
        for (j = 0; s2[j]; j++)
        {
            if(s1[j] != s2[j])
            {
                k = 1;
                break;
            }
        }
    } 
    if(k == 1)
    {
        printf("this names are not equal : %d\n",k);
    }
    else
    {
        printf("this names are  equal\n");
    }
    return(0);
}