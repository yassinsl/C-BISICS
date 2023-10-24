#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/22/2023
Time: 18:20
C program to demonstrate pointer operations
*/
int main (void)
{
    int a[] = { 0, 1, 2, 3, 4, 5};
    int *p = a; 
    int *q = &a[4];
    printf("%d,%d\n",(*p)++,(*p)++);
    int c = p - q;
    int d =q - p;
    printf("c = %d, d = %d\n", c, d);
    *p = 27;
    *q = 25;
    printf("a =%d\n", *p);
    printf("a =%d\n", a[4]);
    p += 3 ;
    p -= 3 ;
    printf("p =%u, q = %u\n", p, q);
    d = q - p;
    printf("d = %d\n", d); 

return 0;
}