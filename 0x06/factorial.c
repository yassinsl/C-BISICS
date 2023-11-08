#include <stdio.h>
int factorial (int a);
int main (void)
{
    int a,b;
    b = 5;
    a = factorial(b);
    printf("factorial of %d is %d\n",b,a);
}
int factorial (int a)
{
    int i,fact = 1;
    for (i = a; i > 0; i--)
    {
        fact *= i;
    }
    return (fact);
}