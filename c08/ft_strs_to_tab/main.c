#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str);
char *ft_strdup(char *src);

struct s_stock_str *ft_strs_to_tab(int ac, char **av) {
  int i = 0;
  t_stock_str *s;
  s = malloc(sizeof(t_stock_str) * (ac + 1));

  if (!s) {
    free(s);
    return NULL;
  }
  while (i < ac) {
    s[i].size = ft_strlen(av[i]);
    s[i].str = av[i];
    s[i].copy = ft_strdup(av[i]);
    i++;
  }
  s[i].str = 0;
  return s;
}

void ft_show_tab(struct s_stock_str *tab) {
  int i = 0;
  while (tab[i].str != 0) {
    printf("%d\n", tab[i].size);
    printf("%s\n", tab[i].str);
    printf("%s\n", tab[i].copy);
    i++;
  }
}

int main(void) {
  char **av = malloc(3 * sizeof(char *));
  av[0] = "maty";
  av[1] = "hattam";
  av[2] = "le dev";

  t_stock_str *tab = ft_strs_to_tab(3, av);
  ft_show_tab(tab);
  return (0);
}
