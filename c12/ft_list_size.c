#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int ft_list_size(t_list *begin_list) {
  int i = 0;
  while (begin_list) {
    begin_list = begin_list->next;
    i++;
  }

  return (i);
}

int main(void) {
  t_list *list = malloc(sizeof(t_list));
  ft_list_size(list);
}
