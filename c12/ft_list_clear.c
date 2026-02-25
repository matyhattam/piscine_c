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

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *)) {
  t_list *current;
  while (begin_list) {
    current = begin_list;
    begin_list = begin_list->next;
    (*free_fct)(current->data);
    free(current);
  }
}

int main(void) {
  char *strs[] = {"maty", "hattam", "dev", "C/C++"};
  t_list *list = ft_list_push_strs(4, strs);

  t_list *current = list;

  printf("adding\n");
  while (current) {
    printf("%s", (char *)current->data);
    current = current->next;
  }

  ft_list_clear(list, free_fct);

  printf("deleting\n");
  while (current) {
    printf("%s", (char *)current->data);
    current = current->next;
  }
}
