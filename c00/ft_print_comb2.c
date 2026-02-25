#include <unistd.h>

void	ft_cast(char c)
{
	write(1, &c, 1);
}

void	ft_write(int i, int j)
{
	ft_cast(i / 10 + '0');
	ft_cast(i % 10 + '0');
	write(1, " ", 1);
	ft_cast(j / 10 + '0');
	ft_cast(j % 10 + '0');
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_write(i, j);
			j++;
		}
		i++;
	}

}

int main(void)
{
	ft_print_comb2();
}
