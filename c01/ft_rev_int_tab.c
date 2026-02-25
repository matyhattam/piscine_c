#include <stdio.h>

void ft_rev_int_tab(int *tab, int size) {
  int i = 0;
  int j = size - 1;
  int temp;
  while (i < size / 2) {
    temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
    i++;
    j--;
  }
}

int main() {
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *p = &a[0];

  ft_rev_int_tab(p, 10);
  int i = 0;

  while (i < 10) {
    printf("%d", a[i]);
    printf(" ");
    i++;
  }
}
