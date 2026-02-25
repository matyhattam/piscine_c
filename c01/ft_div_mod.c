#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int div;
	int mod;
	int *p1 = &div;
	int *p2 = &mod;
	ft_div_mod(100, 10, p1, p2);

	printf("%d %d", *p1, *p2);
}
