#include <stdio.h>
int main (void)
{
    int a = 0 , i, num = 0, j;

    printf("Enter positive number :");
    scanf("%d",&a);
    if (a < 0)
    {
        printf ("Please enter a positive number :");
        scanf("%d",&a);
    }
    else 
    {
        for (i = 1 ; i <= a ; i++)
        {
             for (j = 1 ; j <= i ; j++)
             {
                printf("%d",i);
             }
                printf("\n");
        }
    }
   
    return (0);
}