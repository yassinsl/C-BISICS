#include <stdio.h>

/*
Author: YASSINE LAHSSINI
Date: 10/21/2023
Time: 15:20
C program to perform various operations with pointers and arrays
*/

int main (void)
{
    int a[] = {10,11,-1,56,67,5,4};
    int *p,*q;
    p = a; 
    q = &a[0] + 3;//value *q =56

printf("%d %d %d\n",(*p)++,(*p)++,*(++p));//12  11 11 
printf("\n %d\n",*p);//13
printf("\n %d\n",(*p)++); //13
printf("\n %d\n",(*p)++); //14
q--; // value to *q = -1
printf("\n %d\n",(*(q + 2))++);// 67 
printf("\n %d\n",*(p + 2) - 2);// 54 
printf("\n %d\n",*(p++ - 2) - 1);// not found the output 
 
return (0);
}