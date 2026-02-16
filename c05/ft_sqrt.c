#include <stdio.h>

int ft_sqrt(int nb) {
  int i = 0;

  while (i * i < nb && i < nb / 4) {
    i++;
    if (i * i == nb) {
      return i;
    }
  }
  return 0;
}

int main(void) {
  printf("%d", ft_sqrt(64));
  printf("%d", ft_sqrt(65));
}
