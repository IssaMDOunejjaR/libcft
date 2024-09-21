#include "ft_list.h"

List *ft_list_push_strs(int size, char **strs) {
  List *new_lst = NULL;

  if (size <= 0 || strs == NULL)
    return new_lst;

  for (int i = 0; i < size; i++)
    ft_list_push_front(&new_lst, strs[i]);

  return new_lst;
}
