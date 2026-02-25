#ifndef FT_LIST_H
#define FT_LIST_H
#include <stdlib.h>

typedef struct s_list {
  void *data;
  struct s_list *next;
} t_list;

t_list *ft_create_list() {
  t_list *list = (t_list *)malloc(sizeof(t_list));
  if (!list) {
    return (NULL);
  }

  return (list);
}

t_list *ft_list_last(t_list *begin_list) {
  if (!begin_list)
    return (begin_list);

  while (begin_list->next)
    begin_list = begin_list->next;

  return (begin_list);
}

void *ft_list_push_front(t_list **begin_list, void *data) {
  t_list *new_list = ft_create_list();

  if (*begin_list) {
    new_list->data = data;
    new_list->next = *begin_list;
    *begin_list = new_list;
  }

  return (new_list);
}

void ft_list_push_back(t_list **begin_list, void *data) {
  t_list *new_elem = ft_create_list();

  if (*begin_list) {
    new_elem->data = data;
    new_elem->next = NULL;

    t_list *last_elem = ft_list_last(*begin_list);

    last_elem->next = new_elem;
  } else {
    *begin_list = new_elem;
  }
}

#endif
