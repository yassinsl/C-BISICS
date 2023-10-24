#include <stdio.h>
#include <unistd.h>
/*
Author: YASSINE LAHSSINI
Date: 10/21/2023
Time: 15:20
C program to print all unique combinations of n digits
*/

void ft_print_combn(int n);
int main (void)
{
ft_print_combn('9');
}
void ft_print_combn(int n)
{
    char a,b;
    for (a = '0'  ; a <= '9'; a++)
    {
        b = 0;
        for (b = '0' ; b <= '9' ; b++)
        {
            if (a != b && a < b)
            {
                write(1,&a,1);
                write(1,&b,1);
                if ( a != '8' ||b != '9')
                write(1,", ",2);
            }
        }
    }
    write(1,"\n",1);
    return (0);
}
