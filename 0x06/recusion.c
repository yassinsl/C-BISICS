#include <stdio.h>
void desplay (int n);
int main (void)
{
    int a = 4;
    desplay(a); 
}
void desplay (int n)
{
    if (n < 1)
    return;
        else
        {
            printf("%d\n", n);
            desplay(n - 1);
            printf("%d\n", n);
        }
}