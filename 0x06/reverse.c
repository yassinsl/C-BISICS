#include <stdio.h>
int  reverse (int a);
int main (void)
{
    int a,b;
    a = 12345;
    b = reverse (a);
    printf("%d\n",b);

}
int  reverse (int a)
{
    int rm = 0,r = 0;
    while (a != 0)
    {
        if ( a > 0)
        {
        rm = a % 10;
       r = r * 10+ rm;
       a /= 10;
        }
    }
    return r;
}