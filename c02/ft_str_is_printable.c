#include <stdio.h>

int ft_str_is_printable(char *str) {
  int i = 0;
  if (!str) {
    return 1;
  }

  while (str[i] != '\0') {
    if ((str[i] < 32 || str[i] > 126)) {
      return 0;
    }
    i++;
  }
  return 1;
}

int main(void) {
  char *base = "sdfksfsd  dsf";

  printf("%d", ft_str_is_printable(base));
}
