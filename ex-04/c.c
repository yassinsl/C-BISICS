#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i = 0;
    for (i = 0 ; src[i] && i < size ; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}
int main()
{
    char s1[] = "hello";
    char s2[3];
    ft_strlcpy(s2, s1, sizeof (s2));
    printf("%s\n", s2);
    return (0);
}