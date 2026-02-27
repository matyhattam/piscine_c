#include "ft_list.h"

int ft_add_one(int nb) { return nb + 1; }

void ft_list_foreach(t_list *begin_list, void (*f)(void *)) {
  t_list *current = begin_list;

  while (current) {
    (*f)(current->data);
    current = current->next;
  }
}

int main(void) {
  int *nbrs = {1, 2, 3, 4, 5};

  ft_list_foreach(nbrs, ft_add_one);
}
