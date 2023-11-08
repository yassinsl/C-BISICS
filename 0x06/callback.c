#include <stdio.h>
void desplay(void (*func)(int a, int b));
void sum (int x, int y);
int main (void)
{
desplay(&sum);
}
void sum (int x, int y)
{
    printf ("%d\n", x + y);
}
void desplay(void (*func)(int a, int b))
{
    func(10,1);
}