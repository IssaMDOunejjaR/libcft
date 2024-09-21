#include "ft_list.h"

List *ft_list_at(List *begin_list, unsigned int index) {
  unsigned int idx = 0;

  while (begin_list != NULL) {
    if (idx == index)
      return begin_list;

    idx++;
    begin_list = begin_list->next;
  }

  return NULL;
}
