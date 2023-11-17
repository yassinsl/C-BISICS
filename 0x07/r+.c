#include <stdio.h>
int main (void)
{
    char str[10] ="hello world";
    FILE *file = NULL;
    file = fopen("text.txt", "r+");

    fputs("yassin", file);
    printf("%s\n", str);
}