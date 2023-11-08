#include <stdio.h>

void uppercase(char *str)
{
    int i;
    for (i = 0; str[i]; i++)
        str[i] -= 32;
    printf("%s\n", str);
}

void lowercase(char *str)
{
    int i;
    for (i = 0; str[i]; i++)
        str[i] += 32;
    printf("%s\n", str);
}

void allcase(void (*ptr)(char*))
{
       ptr("ilias");
}
 
int main()
{
    allcase(uppercase);
    allcase(lowercase);
}