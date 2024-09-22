#include "ft_list.h"
#include <string.h>

char **ft_list_to_strs(List *begin_list, size_t length) {
  if (!begin_list || length == 0)
    return NULL;

  char **strs = malloc(sizeof(char *) * (length + 1));

  if (!strs)
    return NULL;

  size_t i = 0;

  while (begin_list != NULL && i < length) {
    strs[i] = strdup(begin_list->data);

    i++;
    begin_list = begin_list->next;
  }

  strs[i] = NULL;

  return strs;
}
