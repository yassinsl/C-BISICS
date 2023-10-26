#include <stdio.h>
/*
Author: YASSINE LAHSSINI
Date: 10/25/2023
Time: 11:00
        ~Atoi~
*/
int ft_atoi(char *str);
int main (void)
{
 int result = ft_atoi("16p");
 printf("%d\n", result);
 return (0);
}
int ft_atoi(char *str)
{
    int rt = 0, i;
    for (i = 0; str[i];i++)
    {

        if (str[i] >= '0' && str[i] <= '9')
        {  
            rt = rt * 10 + (str[i] - '0');
        }
        else
        break;
    }
     return(rt);
}