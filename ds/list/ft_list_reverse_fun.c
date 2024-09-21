#include "ft_list.h"

void ft_list_reverse_fun(List *begin_list) {
  if (begin_list == NULL)
    return;

  List *new_list = NULL;

  while (begin_list != NULL) {
    List *x = begin_list;

    ft_list_push_front(&new_list, begin_list->data);

    begin_list = begin_list->next;

    free(x);
  }

  begin_list = new_list;
}
