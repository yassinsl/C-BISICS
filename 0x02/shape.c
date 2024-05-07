#include <stdio.h>
int main (void)
{
    int i,j,num;
     printf("Please enter positive number:");
    scanf("%d",&num);
    if (num < 0)
    {
        printf("please enter positive number : /n");
    }
    else 
    {
        for (i = 1 ; i <= num ; i++)
        { 
        for (j = 1; j <= num ; j++)
        {
            if (j ==  i || j == (num +1)-i)
            {
                printf("x");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
            }
        }
        return (0);
    }
