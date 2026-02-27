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

t_list *ft_list_find(t_list *begin_list, void *data_ref,
                     int (*cmp)(char *, char *)) {
  t_list *current = begin_list;
  while (current) {
    if ((*cmp)((char *)current->data, data_ref) == 0) {
      return current;
    }
    current = current->next;
  }
  return NULL;
}

int main(void) {
  char *strs[] = {"maty", "hattam", "dev", "C/C++"};
  t_list *list = ft_list_push_strs(4, strs);

  t_list *found = ft_list_find(list, "maty", ft_strcmp);
  t_list *current = found;

  while (current) {
    printf("%s", (char *)current->data);
    current = current->next;
  }
}
