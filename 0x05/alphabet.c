#include <stdio.h>
int main (void)
{
    char c = 'A';
    char *ch;
    ch = &c;

    while ( *ch >= 'A' && *ch <= 'Z')
    {
        printf("%c ", (*ch)++);
    }
    printf("\n");
    return (0);
}