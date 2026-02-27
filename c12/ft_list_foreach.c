#include "ft_list.h"
#include <stdio.h>

int ft_arr_len(int *arr) {
  int i = 0;
  while (arr[i]) {
    i++;
  }
  return (i);
}

void ft_add_one(int *nb) { *nb += 1; }

void ft_list_foreach(t_list *begin_list, void (*f)(int *)) {
  t_list *current = begin_list;

  while (current) {
    (*f)(current->data);
    current = current->next;
  }
}

int main(void) {
  int nbrs[] = {1, 2, 3, 4, 5};
  int i = 1;
  t_list *list = ft_create_elem(&nbrs[0]);
  while (i < ft_arr_len(nbrs)) {
    t_list *last = ft_list_last(list);
    last->next = ft_create_elem(&nbrs[i]);
    i++;
  }

  ft_list_foreach(list, &ft_add_one);
  t_list *current = list;
  while (current) {
    printf("%d", *(int *)current->data);
    current = current->next;
  }
}
