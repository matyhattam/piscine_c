#include "ft_list.h"
#include <stdio.h>

int ft_arr_len(int *arr) {
  int i = 0;
  while (arr[i]) {
    i++;
  }
  return (i);
}

int cmp(int *i, int *j) {
  if (*i > *j) {
    return (0);
  }
  return (-1);
}

void ft_list_sort(t_list **begin_list, int (*cmp)(int *, int *)) {
  t_list *current = *begin_list;
  while (current->next) {
    if ((*cmp)((int *)current->data, (int *)current->next->data) == 0) {
      void *tmp = current->data;
      current->data = current->next->data;
      current->next->data = tmp;
    }
    current = current->next;
  }
}

int main(void) {
  int nbrs[] = {1, 5, 3, 6, 5, 9, 7};
  int i = 1;
  t_list *list = ft_create_elem(&nbrs[0]);

  while (i < ft_arr_len(nbrs)) {
    t_list *last = ft_list_last(list);
    last->next = ft_create_elem(&nbrs[i]);
    i++;
  }

  t_list **p_list = &list;
  ft_list_sort(p_list, &cmp);
  t_list *current = list;
  while (current) {
    printf("%d", *(int *)current->data);
    current = current->next;
  }
}
