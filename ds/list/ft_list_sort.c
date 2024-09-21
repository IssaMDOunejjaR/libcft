#include "ft_list.h"

void ft_list_sort(List **begin_list, int (*cmp)(void *, void *)) {
  if (!begin_list || !*begin_list || !cmp)
    return;

  int is_sorted = 0;

  while (!is_sorted) {
    List *list = *begin_list;
    List *prev = NULL;

    is_sorted = 1;

    while (list != NULL) {
      List *current = list;
      List *next = current->next;

      if (next && cmp(next->data, current->data) < 0) {
        List *first = current;
        List *second = next;

        first->next = second->next;
        second->next = first;

        if (prev)
          prev->next = second;
        else
          *begin_list = second;

        prev = second;
        list = second;

        is_sorted = 0;
      } else
        prev = current;

      list = list->next;
    }
  }
}
