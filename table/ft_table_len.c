#include "ft_table.h"

size_t ft_table_len(char **table) {
  if (table == NULL)
    return 0;

  size_t len = 0;

  for (int i = 0; table[i] != NULL; i++)
    len++;

  return len;
}
