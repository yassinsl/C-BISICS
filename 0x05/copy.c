#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/24/2023
Time: 08:00
C program to copy and display a string using pointers
*/
int main (void)
{
    char a[100],j = 0;
    char *ptr;
    printf("please enter your name :");
    scanf("%s",a);
    ptr = a;
    printf("Copied string:");
    while(*ptr != '\0')
    {
        
        printf("%c",*ptr);
        ptr++;
    }
  printf("\n");
return (0);
}