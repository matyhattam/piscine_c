#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 100;
  t_list *list = ft_create_elem(&i);

  t_list **p_list = &list;
  int j = 300;
  ft_list_push_front(p_list, &j);

  t_list *current = list;
  while (current) {
    printf("%d ", *(int *)current->data);
    current = current->next;
  }
}
