#include <stdio.h>
int sum (int x);
int main (void)
{
    int a,c;
        a = 10;
        c = sum(a);
        printf("c = %d\n",c);
}
int sum (int x)
{
    int s;
    s = 0;
    if (x == 1)
    return x;
    s = x + sum (x - 1);
    return s;
}