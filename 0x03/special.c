#include <stdio.h>
#include <string.h>
/*
Author: YASSIN LAHSSINI
Date: 10/17/2023
Time: 11:10
Program Description:
C program to find total number of alphabets, digits or special characters in a string
*/
int main (void)
{
    char s1[100];
    int a = 0, b = 0, c = 0;
    printf("please enter your name  :");
    scanf("%s",s1);
        printf("this is your name :%s\n",s1);
        for(int i = 0; s1[i]; i++)
        {
        if (s1[i] >= 'a' || s1[i] =='z'|| s1[i] >= 'A' || s1[i] <='Z')
        {
            a++;
        }
        else if (s1[i] >= '0' && s1[i]<='9')
        b++;
    else
    c++;
        }
        printf("number the Alphabets is =% d\n ",a);
        printf("number of digits is = %d\n",b);
        printf("number of spiciale characters is = %d\n",c);
        return(0);
}