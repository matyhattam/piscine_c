#include <stdio.h>
#include <stdlib.h>

typedef struct s_list {
  void *data;
  struct s_list *next;
} t_list;

int ft_list_size(t_list *begin_list) {
  int i = 0;
  while (begin_list) {
    begin_list = begin_list->next;
    i++;
  }

  return (i);
}

int main(void) {
  t_list *list = malloc(sizeof(t_list));
  ft_list_size(list);
}
