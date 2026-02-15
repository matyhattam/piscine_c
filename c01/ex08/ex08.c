#include <stdio.h>

void ft_sort_int_tab(int *tab, int size) {
  int i = 0;
  while (i < size) {
    int j = 0;
    while (j < size) {
      if (tab[j] > tab[j + 1]) {
        int temp;
        temp = tab[j];
        tab[j] = tab[j + 1];
        tab[j + 1] = temp;
      }
      j++;
    }
    i++;
  }
}

int main() {
  int a[10] = {1, 4, 3, 2, 5, 7, 6, 10, 9, 8};
  int *p = &a[0];

  ft_sort_int_tab(p, 10);
  int i = 0;

  while (i < 10) {
    printf("%d", a[i]);
    printf(" ");
    i++;
  }
}
