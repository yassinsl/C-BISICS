#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/21/2023
Time: 15:20
C program to demonstrate the use of pointers
*/
int main (void)
{
    float x = 11.5;
    int a[5] ={10,20,30,40,50};
    int *ptr;
    int ** p = &ptr;
   float * ptr1 = &x;
    printf("%.2f\n", *ptr1);// address of the variable x
   printf("------------------\n");
    printf("%p\n", ptr1);

   printf("------------------\n");

    ptr = &a[0];
    ptr = ptr + 1;
     *ptr = 2; 
    printf("%p\n", ptr); // address of the variable a
   printf("------------------\n");
    printf("%d\n", *ptr);
   printf("------------------\n");
    printf("%u\n", &a); //address of the variable a
    * p = 25;
    printf("%d %d %d\n",*p,ptr,a);
}