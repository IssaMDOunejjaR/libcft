#include "ft_list.h"

void ft_sorted_list_insert(List **begin_list, void *data,
                           int (*cmp)(void *, void *)) {
  if (!begin_list || !data || !cmp)
    return;

  List *current = *begin_list;
  List *prev = NULL;

  if (!current || cmp(data, current->data) < 0) {
    ft_list_push_front(begin_list, data);

    return;
  }

  while (current != NULL && cmp(data, current->data) >= 0) {
    prev = current;
    current = current->next;
  }

  List *new_node = ft_create_elem(data);

  prev->next = new_node;
  new_node->next = current;
}
