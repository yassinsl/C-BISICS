#include <stdio.h>
int main (void)
{
    int a, b = 0,c = 0;
    printf("enter a number :");
    scanf("%d",&a);
    while (a != 0)
    {
        b = a % 10;
        c = c * 10 + b;
        a =  a / 10;
    }
    printf("reverse  number is : %d\n",c);
    return (0);
}