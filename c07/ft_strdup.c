#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str) {
  int i;

  i = 0;
  while (str[i] != 0) {
    i++;
  }
  return i;
}

char *ft_strdup(char *src) {
  char *dup = malloc(ft_strlen(src) + 1);
  int i = 0;

  while (src[i] != '\0') {
    dup[i] = src[i];
    i++;
  }

  dup[i] = '\0';
  return dup;
}

int main(void) {
  char *str = "je m'appel maty";
  char *dup = ft_strdup(str);

  printf("%s\n", dup);
  printf("%p\n", &dup);
  printf("%p\n", &str);
}
