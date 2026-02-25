#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void ft_add_elem(t_list *list, void *data) {
  list->data = data;
  list->next = NULL;
}

t_list *ft_list_push_front_ex(t_list **begin_list, void *data) {
  t_list *new_list = ft_create_list();

  if (*begin_list) {
    new_list->data = data;
    new_list->next = *begin_list;
    *begin_list = new_list;
  }
  return (new_list);
}

int main(void) {
  t_list *list = ft_create_list();
  int i = 100;
  ft_add_elem(list, &i);

  t_list *current = list;
  while (current) {
    printf("%d ", *(int *)current->data);
    current = current->next;
  }

  t_list **p_list = &list;
  int j = 300;
  t_list *new_current = ft_list_push_front_ex(p_list, &j);
  while (new_current) {
    printf("%d ", *(int *)new_current->data);
    new_current = new_current->next;
  }
}
