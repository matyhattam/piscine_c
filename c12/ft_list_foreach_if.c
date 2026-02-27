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

void ft_replace_letter(char *str) { str[0] = 'U'; }

void ft_list_foreach_if(t_list *begin_list, void (*f)(char *), void *data_ref,
                        int (*cmp)(char *, char *)) {
  t_list *current = begin_list;
  while (current) {
    if ((*cmp)((char *)current->data, data_ref) == 0) {
      (*f)(current->data);
    }
    current = current->next;
  }
}

int main(void) {
  char *strs[] = {"maty", "hattam", "dev", "C/C++"};
  t_list *list = ft_list_push_strs(4, strs);

  ft_list_foreach_if(list, ft_replace_letter, "maty", ft_strcmp);
  t_list *current = list;

  while (current) {
    printf("%s", (char *)current->data);
    current = current->next;
  }
}
