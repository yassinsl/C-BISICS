#include <stdio.h>
int main (void)
{
    int a,b,c;
     printf("Enter positive number :");
    scanf("%d",&c);
    if (c< 0)
    {
        printf ("Please enter a positive number :");
        scanf("%d",&c);
    }
    else 
    {
        for (a = 1 ; a <= c; a++)
        {
            for (b = c; b >=c-a+1 ; b--)
            {
                printf("%d",b);
            }
            printf("\n");
        }
    }
    return 0;
}