#include<stdio.h>
#include<unistd.h>
void ft_putnbr(int nb);
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(void)
{
    ft_putnbr(20);
    ft_putchar('\n');
}
void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
   else if (nb >= 0 && nb <= 9)
    {
        ft_putchar(nb + '0');
    }
    else if (nb > 9)
    {
    ft_putchar(nb / 10 + '0');
    ft_putchar(nb % 10 + '0');
    }
}