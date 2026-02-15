#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_fr(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int nb;
	int *a = &nb;
	int **b = &a;
	int ***c = &b;
	int ****d = &c;
	int *****e = &d;
	int ******f = &e;
	int *******g = &f;
	int ********h = &g;
	int *********i = &h;
	ft_ultimate_fr(&h);
	printf("%d", *********i);
}
