#include <stdio.h>
#include <unistd.h>
void ft_print_alphabet(void);
int main (void)
{
ft_print_alphabet();
return (0);
}
void ft_print_alphabet(void)
{
    char c ='z';
    while (c >= 'a')
    {
        write(1,&c,1);
        c--;
    }
        write(1,"\n",1);
}