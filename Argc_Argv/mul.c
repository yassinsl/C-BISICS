#include <unistd.h>
int ft_atoi(char *str);
void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putnbr(int nb)
{
	if(nb >= 0 && nb <= 9)
		ft_putchar(nb +'0');
	else if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr(-nb);
		}
	else 
	{
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
	}
}
int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int num_1= ft_atoi(argv[1]);
        int num_2 = ft_atoi(argv[2]);
        int num_3 = num_1 * num_2;
        ft_putnbr(num_3);
    }
    else
    {
           write(1,"error\n",5);
           return 1;
    }
 return(0);
}
int ft_atoi(char *str)
{
    int i = 0,num = 0;

    while(str[i] != '\0')
        {
            if(str[i] >= '0' && str[i] <= '9')
                num = num * 10 + str[i] -'0';
            i++;
        }
        return num;
}