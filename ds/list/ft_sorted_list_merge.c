#include "ft_list.h"

void ft_sorted_list_merge(List **begin_list1, List *begin_list2,
                          int (*cmp)(void *, void *)) {
  if (!begin_list2 || !cmp)
    return;

  while (begin_list2 != NULL) {
    ft_sorted_list_insert(begin_list1, begin_list2->data, cmp);

    begin_list2 = begin_list2->next;
  }
}
