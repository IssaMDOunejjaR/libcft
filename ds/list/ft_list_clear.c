#include "ft_list.h"
#include <stdio.h>

void ft_list_clear(List *begin_list, void (*free_fct)(void *)) {
  if (!free_fct)
    return;

  while (begin_list != NULL) {
    List *tmp = begin_list;

    free_fct(tmp->data);

    begin_list = begin_list->next;

    free(tmp);
  }
}
