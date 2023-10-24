#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/24/2023
Time: 09:00
C program to calculate the length of a string using pointers
*/
int main (void)
{
    char a[100],j = 0;
    char *ptr = a;
    printf("please enter your name :");
    scanf("%s",ptr);
    ptr = a;
    for (int i=0; i  < 100; i++)
    {
        if(*ptr !='\0')
        {
            j++;
             ptr++;
        }
       
    }
    printf("lenght the array is %d\n", j);
    return (0);
}