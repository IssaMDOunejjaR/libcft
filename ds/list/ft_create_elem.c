#include "ft_list.h"
#include <stdio.h>

List *ft_create_elem(void *data) {
  List *lst = malloc(sizeof(List));

  if (!lst)
    return NULL;

  lst->data = data;
  lst->next = NULL;

  return lst;
}
