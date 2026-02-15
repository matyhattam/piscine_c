#include <stdio.h>

int ft_strlen(char *str) {
  int i;

  i = 0;
  while (str[i] != 0) {
    i++;
  }
  return i;
}

char *ft_strcat(char *dest, char *src) {
  int i = 0;
  int str_len = ft_strlen(dest);

  while (src[i] != '\0') {
    dest[str_len] = src[i];
    i++;
    str_len++;
  }

  dest[str_len] = '\0';
  return dest;
}

int main(void) {
  char *base = "maty ";
  char last[50] = "hattam";

  ft_strcat(last, base);

  printf("%s", last);
}
