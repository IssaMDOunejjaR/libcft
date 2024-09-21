#include "ft_list.h"

List *ft_list_find(List *begin_list, void *data_ref,
                   int (*cmp)(void *, void *)) {
  if (!cmp)
    return NULL;

  while (begin_list != NULL) {
    if (cmp(begin_list->data, data_ref) == 0)
      return begin_list;

    begin_list = begin_list->next;
  }

  return NULL;
}
