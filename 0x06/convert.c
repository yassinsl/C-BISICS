#include <stdio.h>
void lowercase (char *str);
void upercase (char *str);
int main (void)
{
    char str[100];
    int a;
    printf ("please enter your string: ");
    scanf ("%s", str);
    printf (" 1. Convert to uppercase\n");
    printf (" 2. Convert to lowercase\n");
    printf("Choose the number you want to complete a program bro : ");
    scanf ("%d", &a);
    
    void (*functions[2])(char *) = {upercase, lowercase};
    functions[a - 1](str);
}
void lowercase (char *str)
{
    int i;
    for(i = 0; str[i]; i++)
    {
        if(str[i]>= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else
        str[i];
    }
    printf("%s\n", str);
}
void upercase (char *str)
{
    int i;
    for(i = 0; str[i]; i++)
    {
        if(str[i]>= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else
        str[i];
    }
    printf("%s\n", str);
}