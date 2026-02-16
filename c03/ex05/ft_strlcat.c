#include <stdio.h>

int ft_strlen(char *str) {
  int i;

  i = 0;
  while (str[i] != 0) {
    i++;
  }
  return i;
}

int ft_strlcat(char *dest, char *src, unsigned int size) {
  int i = 0;
  int str_len = ft_strlen(dest);

  if (size <= str_len) {
    return size + ft_strlen(src);
  }

  while (src[i] != '\0' && str_len + i < size - 1) {
    dest[str_len] = src[i];
    i++;
    str_len++;
  }

  dest[str_len] = '\0';
  return str_len + ft_strlen(src);
}

int main(void) {
  char *base = "maty ";
  char last[50] = "hattam";

  ft_strlcat(last, base, 50);

  printf("%s", last);
}
