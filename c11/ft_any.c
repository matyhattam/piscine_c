#include <stdio.h>

int ft_strlen(char *str) {
  int i = 0;

  while (str[i] != 0) {
    i++;
  }
  return i;
}

int ft_check(char *str) {
  if (ft_strlen(str) > 1) {
    return 1;
  }
  return 0;
}

int ft_any(char **tab, int (*f)(char *)) {
  int i = 0;

  while (tab[i] != NULL) {
    if ((*f)(tab[i]) != 0) {
      return 1;
    }
  }
  return 0;
}

int main(void) {
  char *tab[] = {"maty", "13242", "hattam"};
  if (ft_any(tab, &ft_check)) {
    printf("true");
  }
}
