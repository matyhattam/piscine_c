#include <stdio.h>

char *ft_strcpy(char *dest, char *src) {
  int i = 0;

  while (src[i] != '\0') {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';

  return dest;
}

int main(void) {
  char *base = "je suis entrain de m'amuser";
  char *final;

  ft_strcpy(final, base);
  printf("%s", final);
}
