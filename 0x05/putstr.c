#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);
int main(void)
{
ft_putstr("hello yassin");
}
void ft_putstr(char *str)
{
    int i;
    for(i=0; str[i]; i++)
    {
        write(1,&str[i],1);
    }
    write(1,"\n",1);
}