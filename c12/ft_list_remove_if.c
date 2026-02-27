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

void free_fct(void *data) { free(data); }

void ft_list_remove_if(t_list **begin_list, void *data_ref,
                       int (*cmp)(char *, char *), void (*free_fct)(void *)) {
  t_list *tmp;
  t_list *current = *begin_list;

  if ((*cmp)((char *)current->data, data_ref) == 0) {
    *begin_list = (*begin_list)->next;
    free_fct(current->data);
    free(current);
  }

  current = *begin_list;
  while (current->next) {
    if ((*cmp)((char *)current->next->data, data_ref) == 0) {
      tmp = current->next;
      current->next = current->next->next;
      free_fct(tmp->data);
      free(tmp);
    } else {
      current = current->next;
    }
  }
}

int main(void) {
  char *strs[] = {"maty", "hattam", "dev", "C/C++"};
  t_list *list = ft_list_push_strs(4, strs);

  t_list **p_list = &list;
  ft_list_remove_if(p_list, "hattam", ft_strcmp, free_fct);

  t_list *current = list;
  while (current) {
    printf("%s", (char *)current->data);
    current = current->next;
  }
}
