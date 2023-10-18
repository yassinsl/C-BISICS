#include <stdio.h>
int main (void)
{
    int a;
    char b;
    for (a = 1 ; a <=10 ; a++)
    {
        for(b = 'a'; b <= 'z'; b++)
        {
            putchar (b);
        }
        putchar('\n');
    }
    return (0);
}