#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

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
  t_list *new_current = ft_list_push_front(p_list, &j);
  while (new_current) {
    printf("%d ", *(int *)new_current->data);
    new_current = new_current->next;
  }
}
