#include "ft_list.h"

List *ft_list_last(List *begin_list) {
  if (!begin_list)
    return NULL;

  while (begin_list->next != NULL)
    begin_list = begin_list->next;

  return begin_list;
}
