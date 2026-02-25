#include <stdio.h>

int ft_strlen(char *str) {
  int i = 1;

  while (str[i] != '\0') {
    i++;
  }
  return i;
}

int main(void) {
  int len = ft_strlen("hattam");
  printf("%d", len);
}
