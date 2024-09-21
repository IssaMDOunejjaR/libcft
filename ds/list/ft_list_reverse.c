#include "ft_list.h"

void ft_list_reverse(List **begin_list) {
  if (begin_list == NULL)
    return;

  List *tmp = *begin_list;
  List *new_list = NULL;

  while (tmp != NULL) {
    List *x = tmp;

    ft_list_push_front(&new_list, tmp->data);

    tmp = tmp->next;

    free(x);
  }

  *begin_list = new_list;
}
