#include <stdio.h>
int main (void)
{
    int a ,b;
    printf("enter the number :");
    scanf("%d",&a);
    for (b = a; b >= 1; b--)
    {
        printf("%d",b);
        if (b != 1)
        printf("_");
    }
    printf("\n");
    return (0);
}