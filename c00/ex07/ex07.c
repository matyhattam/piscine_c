#include <unistd.h>

// void	ft_putnbr(int nb)
// {
// 	char	c;
// 	c = nb + '0';

// 	write(1, &c, 11);

// }

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_min_int(void)
{
	int		cur;
	char	*min;

	min = "-2147483648";
	cur = 0;
	while (min[cur] != 0)
	{
		ft_putchar(min[cur]);
		cur++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write_min_int();
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
		return ;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}
	ft_putnbr((nb / 10));
	ft_putchar((nb % 10) + '0');
	return ;
}

int	main()
{
	ft_putnbr(1324);
}
