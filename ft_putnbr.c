#include<unistd.h>

void ft_putnbr(int nb);

void ft_putchar(char c);

int main()
{
	ft_putnbr(2147483647);
	ft_putchar(' ');
	ft_putnbr(-2147483647);
	ft_putchar(' ');
	ft_putnbr(0);
	ft_putchar(' ');
	ft_putnbr(42);
}

void ft_putnbr(int nb)
{

	if(nb > 9)
        {
          	ft_putnbr(nb /10);
	}


	if(nb < 0 && nb >= -9 )
	{
		
		ft_putchar('-');
		ft_putchar(48 + (nb % 10*-1));
	}
	if(nb <= -10)
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_putnbr(nb /10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(48 + nb % 10);
	}
}

void ft_putchar(char c)
{

	write(1,&c,1);
}
