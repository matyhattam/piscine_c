#include "ft_list.h"
#include <stdio.h>

t_list *ft_list_push_strs(int size, char **strs) {
  int i = 0;
  t_list *list = ft_create_list();
  t_list **p_list = &list;

  while (i < size) {
    ft_list_push_front(p_list, strs[i]);
    i++;
  }

  return (list);
}

int main(void) {
  char *strs[] = {"maty", "hattam", "dev", "C/C++"};
  t_list *list = ft_list_push_strs(4, strs);

  t_list *current = list;

  while (current->next) {
    printf("%s", (char *)current->data);
    current = current->next;
  }
}
