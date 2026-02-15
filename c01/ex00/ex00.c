#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	// int num;
	// int *p = &num;
	// // p = 0;
	// ft_ft(&num);

	// printf("%d", *p);
	// printf("%d", num);

	int a = 10, b = 20;
	int *p = &a;
	printf("%d\n", *p);  // 10
	p = &b;  // Now point to b
	printf("%d\n", *p);  // 20
	*p = 40;
	printf("%d\n", *p);  // 20
}
