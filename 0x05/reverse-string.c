#include <stdio.h>
#include <string.h>
/*
Author: YASSINE LAHSSINI
Date: 10/21/2023
Time: 15:20
C program to reverse and print a string
*/
int main (void)
{
    char a[100],j = 0,n;
    char *ptr;
    printf("please enter your name :");
    scanf("%s",a);
    n = strlen(a);
    ptr = &a[n - 1];
    printf("Copied string:");
    while(*ptr != '\0')
    {
        
        printf("%c",*ptr);
        ptr--;
    }
  printf("\n");
  return (0);
}