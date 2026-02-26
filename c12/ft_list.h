#ifndef FT_LIST_H
#define FT_LIST_H
#include <stdlib.h>

typedef struct s_list {
  void *data;
  struct s_list *next;
} t_list;

int ft_strlen(char *str) {
  int i = 0;

  while (str[i] != 0) {
    i++;
  }
  return i;
}

char *ft_strdup(char *src) {
  char *dup = malloc(ft_strlen(src) + 1);
  int i = 0;

  while (src[i] != '\0') {
    dup[i] = src[i];
    i++;
  }

  dup[i] = '\0';
  return dup;
}

t_list *ft_create_elem(void *data) {
  t_list *list = (t_list *)malloc(sizeof(t_list));

  if (!list) {
    return (NULL);
  }

  list->data = data;
  list->next = NULL;

  return (list);
}

int ft_list_size(t_list *begin_list) {
  int i = 0;
  while (begin_list) {
    begin_list = begin_list->next;
    i++;
  }

  return (i);
}

t_list *ft_list_last(t_list *begin_list) {
  if (!begin_list)
    return (begin_list);

  while (begin_list->next)
    begin_list = begin_list->next;

  return (begin_list);
}

void ft_list_push_front(t_list **begin_list, void *data) {

  if (*begin_list) {
    t_list *new_list = ft_create_elem(data);
    new_list->next = *begin_list;
    *begin_list = new_list;
  }
}

void ft_list_push_back(t_list **begin_list, void *data) {
  t_list *new_elem = ft_create_elem(data);

  if (*begin_list) {
    new_elem->next = NULL;
    t_list *last_elem = ft_list_last(*begin_list);

    last_elem->next = new_elem;
  } else {
    *begin_list = new_elem;
  }
}

#endif
