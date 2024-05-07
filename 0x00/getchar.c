#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/04/2023
Time: 12:52
This program prompts the user to enter a character and checks if the entered character is an uppercase letter ('A' to 'Z').
         If it is, it displays a message asking for lowercase letters. 
         Otherwise, it displays the entered character.
*/
int main (void)
{
    char c;
    printf ("please enter the char from a to z :");
    c = getchar();
    if (c >= 'A' && c <= 'Z')
    {
        printf("please enter small letters\n");
    }
    else printf("this is your letter : %c\n",c);
    return (0);
}