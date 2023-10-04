#include <stdio.h>
/*
author :YASSINE LAHSSINI
date : 10/04/2023
time : 10:00
program : calculator
*/
int main (void)
{
    int num1, num2;
    char op;
    printf ("enter to numbers and operaators : ");
    scanf ("%d" "%c" "%d", &num1,&op,&num2);
    if (op == '+')
    {
        int sum;
         sum = num1 + num2;
         printf (" %d + %d = %d\n",num1, num2, sum);
    }
    else if (op == '-')
    {
        int sub;
         sub = num1 - num2;
         printf (" %d - %d = %d\n",num1, num2, sub);
    }
    else if (op == '*')
    {
        int mul;
         mul = num1 * num2;
         printf (" %d * %d = %d\n",num1, num2, mul);
    }
     else if (op =='/')
    {
        int dev;
         dev= num1 / num2;
         printf (" %d / %d = %d\n",num1, num2, dev);
    }
     else if (op == '%')
    {
        int mod;
         mod = num1 % num2;
         printf (" %d , %d = %d\n", num1, num2,mod);
    }
return 0;
}