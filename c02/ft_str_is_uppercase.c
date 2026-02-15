#include <stdio.h>

int ft_str_is_uppercase(char *str) {
  int i = 0;
  if (!str) {
    return 1;
  }

  while (str[i] != '\0') {
    if ((str[i] < 65 || str[i] > 90)) {
      return 0;
    }
    i++;
  }
  return 1;
}

int main(void) {
  char *base = "sdfksfsd  dsf";

  printf("%d", ft_str_is_uppercase(base));
}
