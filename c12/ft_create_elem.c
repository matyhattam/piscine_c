#include <stdlib.h>

typedef struct s_list {
  void *data;
  struct s_list *next;
} t_list;

t_list *ft_create_elem(void *data) {
  t_list *list;
  list = malloc(sizeof(t_list));

  if (!list) {
    return (NULL);
  }

  list->data = data;
  list->next = NULL;

  return (list);
}
