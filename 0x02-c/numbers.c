#include <stdio.h>
int main (void)
{
    int a;
    a = 0;

    while( a<= 10)
    {
        printf("%d",a);
        if (a != 10)
        {
            printf(",");
        }
        a++;
    }
    printf("\n");
    return (0);
}