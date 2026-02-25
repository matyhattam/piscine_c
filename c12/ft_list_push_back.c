#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_create_list() {
  t_list *list;
  list = malloc(sizeof(t_list));
  if (!list) {
    return (NULL);
  }

  return (list);
}

void ft_create_elem(t_list *list, void *data) {
  list->data = data;
  list->next = NULL;
}

int main(void) {
  t_list *list = ft_create_list();
  int i = 100;
  ft_create_elem(list, &i);

  t_list *current = list;
  while (current) {
    printf("%d ", *(int *)current->data);
    current = current->next;
  }

  t_list **p_list = &list;
  int j = 300;
  ft_list_push_back(p_list, &j);
  current = list;
  while (current) {
    printf("%d ", *(int *)current->data);
    current = current->next;
  }
}
