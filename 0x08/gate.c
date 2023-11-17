#include <stdio.h>
int  fun();
int main (void)
{
    for(fun();fun();fun())
        printf("%d\n",fun());
}
int  fun()
{
    static int num =  16;
    return num--; 
}