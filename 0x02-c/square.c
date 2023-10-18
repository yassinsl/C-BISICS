#include <stdio.h>
int main (void)
{
    int a,b ,c;
    printf("Please enter positive number:");
    scanf("%d",&c);
    if (c < 0)
    {
        printf("please enter positive number : /n");
    }
    else
{   
    for (a = 1 ; a <= c; a++)
    {
        for( b = 1 ; b <= c ; b++)
        {
           if (a == 1 || a == c || b == 1 || b == c)
           {
            printf("^");
           }
           else {
            printf (" ");
           }
        }
        printf("\n");
    }
    }
    return 0;
}