#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int a = 10;
	int b = 20;
	int *c = &a;
	int *d = &b;

	ft_swap(&a, &b);

	printf("%d %d", *c, *d);
}
