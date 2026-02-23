#include <stdio.h>

int ft_add_one(int nb) { return nb + 1; }

void ft_map(int *tab, int length, int (*f)(int)) {
  int i = 0;

  while (i < length) {
    tab[i] = (*f)(tab[i]);
    i++;
  }
}

int main(void) {
  int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  ft_map(tab, 10, &ft_add_one);

  int i = 0;
  while (i < 10) {
    printf("%d", tab[i]);
    i++;
  }
}
