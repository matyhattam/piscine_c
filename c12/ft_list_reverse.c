#include "ft_list.h"
#include <stdio.h>

t_list *ft_list_push_strs(int size, char **strs) {
  int i = 0;
  t_list *list = NULL;
  t_list *new_elem;
  t_list **p_list = &list;

  while (i < size) {
    new_elem = ft_create_elem(ft_strdup(strs[i]));
    new_elem->next = list;
    list = new_elem;
    i++;
  }

  return (list);
}

void ft_list_reverse(t_list **begin_list) {
  t_list *current = *begin_list;
  t_list *prev = NULL;
  t_list *next;

  while (current != NULL) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  *begin_list = prev;
}

int main(void) {
  char *strs[] = {"maty", "hattam", "dev", "C/C++"};
  t_list *list = ft_list_push_strs(4, strs);

  t_list **p_list = &list;

  ft_list_reverse(p_list);

  t_list *current = list;
  while (current) {
    printf("%s, ", (char *)current->data);
    current = current->next;
  }
}
