#include <stdio.h>

int ft_iterative_factorial(int nb) {
  int i = nb;

  if (!nb || nb < 0) {
    return 0;
  }

  while (i != 1) {
    nb = nb * (i - 1);
    i--;
  }
  return nb;
}

int main(void) {
  int nb = 12;
  printf("%d", ft_iterative_factorial(nb));
}
