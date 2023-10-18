#include <stdio.h>
#include <string.h>
/*
Author: YASSIN LAHSSINI
Date: 10/18/2023
Time: 11:40
Program Description:
C program to find length of a string
*/
int main (void)
{
    int i,count,j = 0;
    char user[10];
    printf("Please enter a username :");
    scanf("%s",user);
    printf("your name is  : %s\n",user);
    count = strlen(user);
    printf("length is :%d\n",count);
    for(i = 0; user[i] != '\0'; i++)
    {
        j++;
    }
    printf("lenght is : %d\n",j);
    return (0);
}