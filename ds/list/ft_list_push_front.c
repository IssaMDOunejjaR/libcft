#include "ft_list.h"
#include <stdio.h>

void ft_list_push_front(List **begin_list, void *data) {
  List *new_lst = ft_create_elem(data);

  if (!new_lst)
    return;

  if (begin_list == NULL)
    begin_list = &new_lst;
  else {
    new_lst->next = *begin_list;
    *begin_list = new_lst;
  }
}
