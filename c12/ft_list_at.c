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

t_list *ft_list_at(t_list *begin_list, unsigned int nbr) {
  if (nbr >= ft_list_size(begin_list))
    return (NULL);

  int i = 0;
  while (i != nbr) {
    begin_list = begin_list->next;
    i++;
  }
  return (begin_list);
}

int main(void) {
  char *strs[] = {"maty", "hattam", "dev", "C/C++"};
  t_list *list = ft_list_push_strs(4, strs);

  t_list *current = list;

  while (current) {
    printf("%s, ", (char *)current->data);
    current = current->next;
  }

  t_list *list_at = ft_list_at(list, 4);
  if (list_at != NULL) {
    printf("%s", (char *)list_at->data);
  }
}
