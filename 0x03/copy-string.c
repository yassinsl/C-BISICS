#include <stdio.h>
#include <string.h>
/*
Author: YASSIN LAHSSINI
Date: 10/18/2023
Time: 08:10
Program Description:
This C program prompts the user to enter their name (up to 9 characters) which they want to copy. 
    It uses the strcpy function to efficiently copy the characters from the input string 's1' to another string 's2'. 
    The program ensures the copied string 's2' is properly null-terminated and then displays both the original and copied names to the user.
*/

int main (void)
{
    char s1[10];
    char s2[10];
    printf("please enter your name which you want to copy :");
    scanf("%s",s1);
        printf("this is your name :%s\n",s1);
            strcpy(s2,s1);
printf("this is your copy name :%s\n",s2);
}