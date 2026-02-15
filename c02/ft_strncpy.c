#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n) {
  int i = 0;

  while (i < n && src[i] != '\0') {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';

  return dest;
}

int main(void) {
  char *base = "maty entrain de m'amuser";
  char final[10];

  ft_strncpy(final, base, 20);
  printf("%s", final);
}
