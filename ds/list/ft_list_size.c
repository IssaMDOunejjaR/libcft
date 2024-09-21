#include "ft_list.h"

int ft_list_size(List *begin_list) {
  int size = 0;

  if (begin_list == NULL)
    return size;

  while (begin_list != NULL) {
    size++;

    begin_list = begin_list->next;
  }

  return size;
}
