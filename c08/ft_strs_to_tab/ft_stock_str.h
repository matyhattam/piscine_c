#ifndef FT_STOCK_STR_H
#define FT_STOCK_STR_H
#include <stdlib.h>

typedef struct s_stock_str {
  int size;
  char *str;
  char *copy;
} t_stock_str;

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
#endif
