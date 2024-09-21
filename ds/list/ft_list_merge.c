#include "ft_list.h"

void ft_list_merge(List **begin_list, List *begin_list2) {
  if (!begin_list || !begin_list2)
    return;

  if (*begin_list == NULL)
    *begin_list = begin_list2;
  else {
    List *last = ft_list_last(*begin_list);

    last->next = begin_list2;
  }
}
