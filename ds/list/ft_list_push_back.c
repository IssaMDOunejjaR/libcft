#include "ft_list.h"

void ft_list_push_back(List **begin_list, void *data) {
  List *list = ft_create_elem(data);

  if (!list)
    return;

  if (*begin_list == NULL)
    *begin_list = list;
  else {
    List *last = ft_list_last(*begin_list);

    last->next = list;
  }
}
