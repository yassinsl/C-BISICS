#include <stdio.h>
void desplay (void);
int main(void)
{
    desplay ();
    desplay ();
}
void desplay (void)
{
    static int x;
    x += 1;
    printf("%d\n", x);
}