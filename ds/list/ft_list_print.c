#include "ft_list.h"

void ft_list_print(List *begin_list, void (*print_fct)(void *)) {
  if (!print_fct)
    return;

  while (begin_list != NULL) {
    print_fct(begin_list->data);

    begin_list = begin_list->next;
  }
}
