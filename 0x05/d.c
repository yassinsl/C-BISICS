#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/24/2023
Time: 08:20
C program to print a string while escaping non-printable characters
*/
void ft_putstr_non_printable(char *str);

int main(void)
{
    ft_putstr_non_printable("Coucou\ntu vas bien?");
    return 0; 
}

void ft_putstr_non_printable(char *str)
{
    int i;
    for ( i = 0; str[i]; i++)
    {
        
            if(str[i] < 32 || str[i] > 126)
                printf("\\%x", str[i]);
            else
                printf("%c", str[i]);
    }
    printf("\n");
}