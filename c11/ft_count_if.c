#include <stdio.h>

int ft_strlen(char *str) {
  int i = 0;

  while (str[i] != 0) {
    i++;
  }
  return i;
}

int ft_check(char *str) {
  if (ft_strlen(str) > 5) {
    return 1;
  }
  return 0;
}

int ft_count_if(char **tab, int length, int (*f)(char *)) {
  int i = 0;
  int total = 0;

  while (i < length) {
    if ((*f)(tab[i])) {
      total++;
    }
    i++;
  }
  return total;
}

int main(void) {
  char *tab[] = {"maty", "13242", "hattam"};
  int i = ft_count_if(tab, 3, &ft_check);
  printf("%d", i);
}
