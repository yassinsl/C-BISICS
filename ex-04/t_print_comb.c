#include <stdio.h>
#include <unistd.h>
void ft_print_comb(void);
int main (void)
{
ft_print_comb();
}
void ft_print_comb(void)
{
    char a,b ,c;
    for(a = '0' ; a <='9' ; a++)
    {
           for(b = '0'; b <='9' ; b++)
           {
            for(c ='0' ; c <= '9'; c++)
            {
                if (a != b && a != c && b != c && a < b && b < c )
                {
                    write (1,&a,1);
                    write (1,&b,1);
                    write (1,&c,1);
                    write(1 , ", " ,2);
                }
            }
           }
    }
    write(1,"\n",1);
}
