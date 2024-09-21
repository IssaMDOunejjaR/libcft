#include "ft_list.h"

void ft_list_foreach(List *begin_list, void (*f)(void *)) {
  if (!f)
    return;

  while (begin_list != NULL) {
    f(begin_list->data);

    begin_list = begin_list->next;
  }
}
