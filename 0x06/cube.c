#include <stdio.h>
#include <math.h>
int cube (int x);
int main (void)
{
    int a = cube (5);
    printf (" a = %d\n", a);
        int b = cube (4);
        printf (" b = %d\n", b);

    return (0);
}
int cube (int x)
{
    int a;
    a = pow(x , 3);

    return (a);
}