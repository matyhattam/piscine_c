#include <stdio.h>

void ft_utlimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int main(void)
{
	int a = 100;
	int b = 10;
	int *p1 = &a;
	int *p2 = &b;

	ft_utlimate_div_mod(p1, p2);
	printf("%d %d", *p1, *p2);
}
