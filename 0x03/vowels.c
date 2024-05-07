#include <stdio.h>
#include <string.h>
/*
Author: YASSIN LAHSSINI
Date: 10/18/2023
Time: 11:50
Program Description:
C program to count total number of vowels and consonants in a string
*/
int main (void)
{
    char s1[100];
    int a = 0, b = 0;
    printf("please enter your name  :");
    scanf("%s",s1);
        printf("this is your name :%s\n",s1);
        for(int i = 0; s1[i]; i++)
        {
    if ((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z'))
        {
        if (s1[i] == 'a' || s1[i] =='o'||s1[i]=='O'|| s1[i] == 'A' ||s1[i] =='i' || s1[i]=='I' || s1[i] =='e' || s1[i] =='E'|| s1[i] =='u' ||s1[i] =='U')
        {
            a++;
        }
        else
        b++;
        }
        }
        printf("number the Vowels  is = %d\n ",a);
        printf("number of digits is = %d\n",b);
        return(0);
}