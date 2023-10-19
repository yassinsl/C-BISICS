#include <stdio.h>
#include <unistd.h>
/*
Author: YASSIN LAHSSINI
Date: 10/18/2023
Time: 08:00
Program Description:
This C program prompts the user to enter their name (up to 9 characters) which they want to copy. It then copies the characters from the input string 's1' to another string 's2'. 
The program ensures the copied string 's2' is properly null-terminated and displays the copied name to the user.
*/

int main (void)
{
    char s1[10] = "yassin";
    char s2[10];
    int n = 5;
    for (int i = 0; s1[i] ; i++)
    {
        if(i < n)
        s2[i] = s1[i];
    }
        write(1, s2, 7);
        write(1,"\n", 2);
}