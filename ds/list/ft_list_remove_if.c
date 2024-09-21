#include "ft_list.h"

void ft_list_remove_if(List **begin_list, void *data_ref,
                       int (*cmp)(void *, void *), void (*free_fct)(void *)) {
  if (!begin_list || !*begin_list || !data_ref || !cmp || !free_fct)
    return;

  List *list = *begin_list;
  List *prev = NULL;

  while (list != NULL) {
    List *current = list;

    list = list->next;

    if (cmp(current->data, data_ref) == 0) {
      free_fct(current->data);

      if (prev)
        prev->next = list;
      else
        *begin_list = list;

      free(current);
    } else
      prev = current;
  }
}
