#include <unistd.h>

void ft_putchar(int nb) { write(1, &nb, 1); }

void ft_putnbr(int nb) {
  if (nb == -2147483648) {
    write(1, "-2147483648", 11);
    return;
  }
  if (nb < 0) {
    ft_putchar('-');
    nb = -nb;
  }
  if (nb >= 10)
    ft_putnbr(nb / 10);
  ft_putchar((nb % 10) + '0');
}

void ft_foreach(int *tab, int length, void (*f)(int)) {
  int i = 0;

  while (i < length) {
    (*f)(tab[i]);
    i++;
  }
}

int main(void) {
  int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  ft_foreach(tab, 10, &ft_putnbr);
}