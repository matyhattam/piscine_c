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

int ft_check(int a, int b) {
  if (a > b) {
    return -1;
  } else {
    return 1;
  }
}

int ft_is_sort(int *tab, int length, int (*f)(int, int)) {
  int i = 0;
  int total = 0;

  while (i < length) {
    total = total + ((*f)(tab[i], tab[i + 1]));
    i++;
  }

  if (total < 0) {
    return 0;
  } else {
    return 1;
  }
}

int main(void) {
  int sorted[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int unsorted[] = {1, 4, 3, 2, 5, 7, 6, 10, 9, 8};

  int res = ft_is_sort(sorted, 10, &ft_check);
  //   int res = ft_is_sort(unsorted, 10, &ft_check);

  printf("%d", res);
}
