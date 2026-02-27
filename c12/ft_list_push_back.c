#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void ft_add_elem(t_list *list, void *data) {
  list->data = data;
  list->next = NULL;
}

int main(void) {
  int i = 100;
  t_list *list = ft_create_elem(&i);

  t_list **p_list = &list;
  int j = 300;
  ft_list_push_back(p_list, &j);

  t_list *current = list;
  while (current) {
    printf("%d ", *(int *)current->data);
    current = current->next;
  }
}
